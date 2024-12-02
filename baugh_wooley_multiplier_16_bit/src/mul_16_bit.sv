/* verilator lint_off UNOPTFLAT */
module mul_16_bit (
    input signed [15:0] a, b,
    output signed [31:0] result
);

// Partial products array
logic [15:0][15:0] pp;

// Generate block with genvar for partial products
genvar i, j;
generate
    for (j = 0; j < 16; j = j + 1) begin : gen_row
        for (i = 0; i < 16; i = i + 1) begin : gen_col
            if (i == 15 && j < 15) begin
                assign pp[i][j] = ~(a[i] & b[j]); // Negate for the last column in rows 0 to 15
            end else if (j == 15 && i < 15) begin
                assign pp[i][j] = ~(a[i] & b[j]); // Negate for the last row in columns 0 to 15
            end else begin
                assign pp[i][j] = a[i] & b[j]; // Regular AND for other positions
            end
        end
    end
endgenerate

// Intermediate sum and carry signals for Wallace Tree reduction stages
logic s_stage1[0:127];
logic s_stage2[128:276];
logic c_stage1[0:127];
logic c_stage2[128:276];

/////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////
///////////////// Wallace Tree Reduction Stages /////////////////
/////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//////////////////////////// STAGE 0 ////////////////////////////
/////////////////////////////////////////////////////////////////
half_adder half_adder00 (pp[1][0], pp[0][1], s_stage1[0], c_stage1[0]);

full_adder full_adder00 (pp[2][0], pp[1][1], pp[0][2], s_stage1[1], c_stage1[1]);

full_adder full_adder01 (pp[3][0], pp[2][1], pp[1][2], s_stage1[2], c_stage1[2]);

full_adder full_adder02 (pp[4][0], pp[3][1], pp[2][2], s_stage1[3], c_stage1[3]);
half_adder half_adder01 (pp[1][3], pp[0][4], s_stage1[4], c_stage1[4]);

full_adder full_adder03 (pp[5][0], pp[4][1], pp[3][2], s_stage1[5], c_stage1[5]);
full_adder full_adder04 (pp[2][3], pp[1][4], pp[0][5], s_stage1[6], c_stage1[6]);

full_adder full_adder05 (pp[6][0], pp[5][1], pp[4][2], s_stage1[7], c_stage1[7]);
full_adder full_adder06 (pp[3][3], pp[2][4], pp[1][5], s_stage1[8], c_stage1[8]);

full_adder full_adder07 (pp[7][0], pp[6][1], pp[5][2], s_stage1[9], c_stage1[9]);
full_adder full_adder08 (pp[4][3], pp[3][4], pp[2][5], s_stage1[10], c_stage1[10]);
half_adder half_adder02 (pp[1][6], pp[0][7], s_stage1[11], c_stage1[11]);

full_adder full_adder09 (pp[8][0], pp[7][1], pp[6][2], s_stage1[12], c_stage1[12]);
full_adder full_adder10 (pp[5][3], pp[4][4], pp[3][5], s_stage1[13], c_stage1[13]);
full_adder full_adder11 (pp[2][6], pp[1][7], pp[0][8], s_stage1[14], c_stage1[14]);

full_adder full_adder12 (pp[9][0], pp[8][1], pp[7][2], s_stage1[15], c_stage1[15]);
full_adder full_adder13 (pp[6][3], pp[5][4], pp[4][5], s_stage1[16], c_stage1[16]);
full_adder full_adder14 (pp[3][6], pp[2][7], pp[1][8], s_stage1[17], c_stage1[17]);

full_adder full_adder15 (pp[10][0], pp[9][1], pp[8][2], s_stage1[18], c_stage1[18]);
full_adder full_adder16 (pp[7][3], pp[6][4], pp[5][5], s_stage1[19], c_stage1[19]);
full_adder full_adder17 (pp[4][6], pp[3][7], pp[2][8], s_stage1[20], c_stage1[20]);
half_adder half_adder03 (pp[1][9], pp[0][10], s_stage1[21], c_stage1[21]);

full_adder full_adder18 (pp[11][0], pp[10][1], pp[9][2], s_stage1[22], c_stage1[22]);
full_adder full_adder19 (pp[8][3], pp[7][4], pp[6][5], s_stage1[23], c_stage1[23]);
full_adder full_adder20 (pp[5][6], pp[4][7], pp[3][8], s_stage1[24], c_stage1[24]);
full_adder full_adder21 (pp[2][9], pp[1][10], pp[0][11], s_stage1[25], c_stage1[25]);

full_adder full_adder22 (pp[12][0], pp[11][1], pp[10][2], s_stage1[26], c_stage1[26]);
full_adder full_adder23 (pp[9][3], pp[8][4], pp[7][5], s_stage1[27], c_stage1[27]);
full_adder full_adder24 (pp[6][6], pp[5][7], pp[4][8], s_stage1[28], c_stage1[28]);
full_adder full_adder25 (pp[3][9], pp[2][10], pp[1][11], s_stage1[29], c_stage1[29]);

full_adder full_adder26 (pp[13][0], pp[12][1], pp[11][2], s_stage1[30], c_stage1[30]);
full_adder full_adder27 (pp[10][3], pp[9][4], pp[8][5], s_stage1[31], c_stage1[31]);
full_adder full_adder28 (pp[7][6], pp[6][7], pp[5][8], s_stage1[32], c_stage1[32]);
full_adder full_adder29 (pp[4][9], pp[3][10], pp[2][11], s_stage1[33], c_stage1[33]);
half_adder half_adder04 (pp[1][12], pp[0][13], s_stage1[34], c_stage1[34]);

full_adder full_adder30 (pp[14][0], pp[13][1], pp[12][2], s_stage1[35], c_stage1[35]);
full_adder full_adder31 (pp[11][3], pp[10][4], pp[9][5], s_stage1[36], c_stage1[36]);
full_adder full_adder32 (pp[8][6], pp[7][7], pp[6][8], s_stage1[37], c_stage1[37]);
full_adder full_adder33 (pp[5][9], pp[4][10], pp[3][11], s_stage1[38], c_stage1[38]);
full_adder full_adder34 (pp[2][12], pp[1][13], pp[0][14], s_stage1[39], c_stage1[39]);

full_adder full_adder35 (pp[15][0], pp[14][1], pp[13][2], s_stage1[40], c_stage1[40]);
full_adder full_adder36 (pp[12][3], pp[11][4], pp[10][5], s_stage1[41], c_stage1[41]);
full_adder full_adder37 (pp[9][6], pp[8][7], pp[7][8], s_stage1[42], c_stage1[42]);
full_adder full_adder38 (pp[6][9], pp[5][10], pp[4][11], s_stage1[43], c_stage1[43]);
full_adder full_adder39 (pp[3][12], pp[2][13], pp[1][14], s_stage1[44], c_stage1[44]);

full_adder full_adder40 (1'b1, pp[15][1], pp[14][2], s_stage1[45], c_stage1[45]);
full_adder full_adder41 (pp[13][3], pp[12][4], pp[11][5], s_stage1[46], c_stage1[46]);
full_adder full_adder42 (pp[10][6], pp[9][7], pp[8][8], s_stage1[47], c_stage1[47]);
full_adder full_adder43 (pp[7][9], pp[6][10], pp[5][11], s_stage1[48], c_stage1[48]);
full_adder full_adder44 (pp[4][12], pp[3][13], pp[2][14], s_stage1[49], c_stage1[49]);

full_adder full_adder45 (pp[14][3], pp[13][4], pp[12][5], s_stage1[50], c_stage1[50]);
full_adder full_adder46 (pp[11][6], pp[10][7], pp[9][8], s_stage1[51], c_stage1[51]);
full_adder full_adder47 (pp[8][9], pp[7][10], pp[6][11], s_stage1[52], c_stage1[52]);
full_adder full_adder48 (pp[5][12], pp[4][13], pp[3][14], s_stage1[53], c_stage1[53]);

full_adder full_adder49 (pp[15][3], pp[14][4], pp[13][5], s_stage1[54], c_stage1[54]);
full_adder full_adder50 (pp[12][6], pp[11][7], pp[10][8], s_stage1[55], c_stage1[55]);
full_adder full_adder51 (pp[9][9], pp[8][10], pp[7][11], s_stage1[56], c_stage1[56]);
full_adder full_adder52 (pp[6][12], pp[5][13], pp[4][14], s_stage1[57], c_stage1[57]);

half_adder half_adder05 (pp[15][4], pp[14][5], s_stage1[58], c_stage1[58]);
full_adder full_adder53 (pp[13][6], pp[12][7], pp[11][8], s_stage1[59], c_stage1[59]);
full_adder full_adder54 (pp[10][9], pp[9][10], pp[8][11], s_stage1[60], c_stage1[60]);
full_adder full_adder55 (pp[7][12], pp[6][13], pp[5][14], s_stage1[61], c_stage1[61]);

full_adder full_adder56 (pp[14][6], pp[13][7], pp[12][8], s_stage1[62], c_stage1[62]);
full_adder full_adder57 (pp[11][9], pp[10][10], pp[9][11], s_stage1[63], c_stage1[63]);
full_adder full_adder58 (pp[8][12], pp[7][13], pp[6][14], s_stage1[64], c_stage1[64]);

full_adder full_adder59 (pp[15][6], pp[14][7], pp[13][8], s_stage1[65], c_stage1[65]);
full_adder full_adder60 (pp[12][9], pp[11][10], pp[10][11], s_stage1[66], c_stage1[66]);
full_adder full_adder61 (pp[9][12], pp[8][13], pp[7][14], s_stage1[67], c_stage1[67]);

half_adder half_adder06 (pp[15][7], pp[14][8], s_stage1[68], c_stage1[68]);
full_adder full_adder62 (pp[13][9], pp[12][10], pp[11][11], s_stage1[69], c_stage1[69]);
full_adder full_adder63 (pp[10][12], pp[9][13], pp[8][14], s_stage1[70], c_stage1[70]);

full_adder full_adder64 (pp[14][9], pp[13][10], pp[12][11], s_stage1[71], c_stage1[71]);
full_adder full_adder65 (pp[11][12], pp[10][13], pp[9][14], s_stage1[72], c_stage1[72]);

full_adder full_adder66 (pp[15][9], pp[14][10], pp[13][11], s_stage1[73], c_stage1[73]);
full_adder full_adder67 (pp[12][12], pp[11][13], pp[10][14], s_stage1[74], c_stage1[74]);

half_adder half_adder07 (pp[15][10], pp[14][11], s_stage1[75], c_stage1[75]);
full_adder full_adder220 (pp[13][12], pp[12][13], pp[11][14], s_stage1[76], c_stage1[76]);

full_adder full_adder68 (pp[14][12], pp[13][13], pp[12][14], s_stage1[77], c_stage1[77]);

full_adder full_adder69 (pp[15][12], pp[14][13], pp[13][14], s_stage1[78], c_stage1[78]);

half_adder half_adder08 (pp[15][13], pp[14][14], s_stage1[79], c_stage1[79]);

/////////////////////////////////////////////////////////////////
//////////////////////////// STAGE 1 ////////////////////////////
/////////////////////////////////////////////////////////////////
half_adder half_adder09 (s_stage1[1], c_stage1[0], s_stage1[80], c_stage1[80]);

full_adder full_adder70 (s_stage1[2], c_stage1[1], pp[0][3], s_stage1[81], c_stage1[81]);

full_adder full_adder71 (s_stage1[3], s_stage1[4], c_stage1[2], s_stage1[82], c_stage1[82]);

full_adder full_adder72 (s_stage1[5], s_stage1[6], c_stage1[3], s_stage1[83], c_stage1[83]);

full_adder full_adder73 (s_stage1[7], s_stage1[8], c_stage1[5], s_stage1[84], c_stage1[84]);
half_adder half_adder10 (c_stage1[6], pp[0][6], s_stage1[85], c_stage1[85]);

full_adder full_adder74 (s_stage1[9], s_stage1[10], s_stage1[11], s_stage1[86], c_stage1[86]);
half_adder half_adder11 (c_stage1[7], c_stage1[8], s_stage1[87], c_stage1[87]);

full_adder full_adder75 (s_stage1[12], s_stage1[13], s_stage1[14], s_stage1[88], c_stage1[88]);
full_adder full_adder76 (c_stage1[9], c_stage1[10], c_stage1[11], s_stage1[89], c_stage1[89]);

full_adder full_adder77 (s_stage1[15], s_stage1[16], s_stage1[17], s_stage1[90], c_stage1[90]);
full_adder full_adder78 (c_stage1[12], c_stage1[13], c_stage1[14], s_stage1[91], c_stage1[91]);

full_adder full_adder79 (s_stage1[18], s_stage1[19], s_stage1[20], s_stage1[92], c_stage1[92]);
full_adder full_adder80 (s_stage1[21], c_stage1[15], c_stage1[16], s_stage1[93], c_stage1[93]);

full_adder full_adder81 (s_stage1[22], s_stage1[23], s_stage1[24], s_stage1[94], c_stage1[94]);
full_adder full_adder82 (s_stage1[25], c_stage1[18], c_stage1[19], s_stage1[95], c_stage1[95]);
half_adder half_adder12 (c_stage1[20], c_stage1[21], s_stage1[96], c_stage1[96]);

full_adder full_adder83 (s_stage1[26], s_stage1[27], s_stage1[28], s_stage1[97], c_stage1[97]);
full_adder full_adder84 (s_stage1[29], c_stage1[22], c_stage1[23], s_stage1[98], c_stage1[98]);
full_adder full_adder85 (c_stage1[24], c_stage1[25], pp[0][12], s_stage1[99], c_stage1[99]);

full_adder full_adder86 (s_stage1[30], s_stage1[31], s_stage1[32], s_stage1[100], c_stage1[100]);
full_adder full_adder87 (s_stage1[33], s_stage1[34], c_stage1[26], s_stage1[101], c_stage1[101]);
full_adder full_adder88 (c_stage1[27], c_stage1[28], c_stage1[29], s_stage1[102], c_stage1[102]);

full_adder full_adder89 (s_stage1[35], s_stage1[36], s_stage1[37], s_stage1[103], c_stage1[103]);
full_adder full_adder90 (s_stage1[38], s_stage1[39], c_stage1[30], s_stage1[104], c_stage1[104]);
full_adder full_adder91 (c_stage1[31], c_stage1[32], c_stage1[33], s_stage1[105], c_stage1[105]);

full_adder full_adder92 (s_stage1[40], s_stage1[41], s_stage1[42], s_stage1[106], c_stage1[106]);
full_adder full_adder93 (s_stage1[43], s_stage1[44], c_stage1[35], s_stage1[107], c_stage1[107]);
full_adder full_adder94 (c_stage1[36], c_stage1[37], c_stage1[38], s_stage1[108], c_stage1[108]);

full_adder full_adder95 (s_stage1[45], s_stage1[46], s_stage1[47], s_stage1[109], c_stage1[109]);
full_adder full_adder96 (s_stage1[48], s_stage1[49], c_stage1[40], s_stage1[110], c_stage1[110]);
full_adder full_adder97 (c_stage1[41], c_stage1[42], c_stage1[43], s_stage1[111], c_stage1[111]);

full_adder full_adder98 (s_stage1[50], s_stage1[51], s_stage1[52], s_stage1[112], c_stage1[112]);
full_adder full_adder99 (s_stage1[53], c_stage1[45], c_stage1[46], s_stage1[113], c_stage1[113]);
full_adder full_adder100 (c_stage1[47], c_stage1[48], c_stage1[49], s_stage1[114], c_stage1[114]);

full_adder full_adder101 (s_stage1[55], s_stage1[56], s_stage1[57], s_stage1[115], c_stage1[115]);
full_adder full_adder102 (c_stage1[50], c_stage1[51], c_stage1[52], s_stage1[116], c_stage1[116]);

full_adder full_adder103 (s_stage1[59], s_stage1[60], s_stage1[61], s_stage1[117], c_stage1[117]);
full_adder full_adder104 (c_stage1[54], c_stage1[55], c_stage1[56], s_stage1[118], c_stage1[118]);

full_adder full_adder105 (s_stage1[63], s_stage1[64], c_stage1[58], s_stage1[119], c_stage1[119]);
full_adder full_adder106 (c_stage1[59], c_stage1[60], c_stage1[61], s_stage1[120], c_stage1[120]);

half_adder half_adder13 (s_stage1[65], s_stage1[66], s_stage1[121], c_stage1[121]);
full_adder full_adder107 (s_stage1[67], c_stage1[62], c_stage1[63], s_stage1[122], c_stage1[122]);

half_adder half_adder14 (s_stage1[68], s_stage1[69], s_stage1[123], c_stage1[123]);
full_adder full_adder108 (s_stage1[70], c_stage1[65], c_stage1[66], s_stage1[124], c_stage1[124]);

half_adder half_adder15 (s_stage1[71], s_stage1[72], s_stage1[125], c_stage1[125]);
full_adder full_adder109 (c_stage1[68], c_stage1[69], c_stage1[70], s_stage1[126], c_stage1[126]);

full_adder full_adder110 (s_stage1[73], s_stage1[74], c_stage1[71], s_stage1[127], c_stage1[127]);

full_adder full_adder111 (s_stage1[75], s_stage1[76], c_stage1[73], s_stage2[128], c_stage2[128]);

full_adder full_adder112 (s_stage1[77], c_stage1[75], c_stage1[76], s_stage2[129], c_stage2[129]);

/////////////////////////////////////////////////////////////////
//////////////////////////// STAGE 2 ////////////////////////////
/////////////////////////////////////////////////////////////////
half_adder half_adder16 (s_stage1[81], c_stage1[80], s_stage2[130], c_stage2[130]);

half_adder half_adder17 (s_stage1[82], c_stage1[81], s_stage2[131], c_stage2[131]);

full_adder full_adder113 (s_stage1[83], c_stage1[82], c_stage1[4], s_stage2[132], c_stage2[132]);

full_adder full_adder114 (s_stage1[84], s_stage1[85], c_stage1[83], s_stage2[133], c_stage2[133]);

full_adder full_adder115 (s_stage1[86], s_stage1[87], c_stage1[84], s_stage2[134], c_stage2[134]);

full_adder full_adder116 (s_stage1[88], s_stage1[89], c_stage1[86], s_stage2[135], c_stage2[135]);

full_adder full_adder117 (s_stage1[90], s_stage1[91], c_stage1[88], s_stage2[136], c_stage2[136]);
half_adder half_adder18 (c_stage1[89], pp[0][9], s_stage2[137], c_stage2[137]);

full_adder full_adder118 (s_stage1[92], s_stage1[93], c_stage1[90], s_stage2[138], c_stage2[138]);
half_adder half_adder19 (c_stage1[91], c_stage1[17], s_stage2[139], c_stage2[139]);

full_adder full_adder119 (s_stage1[94], s_stage1[95], s_stage1[96], s_stage2[140], c_stage2[140]);
half_adder half_adder20 (c_stage1[92], c_stage1[93], s_stage2[141], c_stage2[141]);

full_adder full_adder120 (s_stage1[97], s_stage1[98], s_stage1[99], s_stage2[142], c_stage2[142]);
full_adder full_adder121 (c_stage1[94], c_stage1[95], c_stage1[96], s_stage2[143], c_stage2[143]);

full_adder full_adder122 (s_stage1[100], s_stage1[101], s_stage1[102], s_stage2[144], c_stage2[144]);
full_adder full_adder123 (c_stage1[97], c_stage1[98], c_stage1[99], s_stage2[145], c_stage2[145]);

full_adder full_adder124 (s_stage1[103], s_stage1[104], s_stage1[105], s_stage2[146], c_stage2[146]);
full_adder full_adder125 (c_stage1[100], c_stage1[101], c_stage1[102], s_stage2[147], c_stage2[147]);

full_adder full_adder126 (s_stage1[106], s_stage1[107], s_stage1[108], s_stage2[148], c_stage2[148]);
full_adder full_adder127 (c_stage1[103], c_stage1[104], c_stage1[105], s_stage2[149], c_stage2[149]);

full_adder full_adder128 (s_stage1[109], s_stage1[110], s_stage1[111], s_stage2[150], c_stage2[150]);
full_adder full_adder129 (c_stage1[106], c_stage1[107], c_stage1[108], s_stage2[151], c_stage2[151]);

full_adder full_adder130 (s_stage1[112], s_stage1[113], s_stage1[114], s_stage2[152], c_stage2[152]);
full_adder full_adder131 (c_stage1[109], c_stage1[110], c_stage1[111], s_stage2[153], c_stage2[153]);

full_adder full_adder132 (s_stage1[115], s_stage1[116], c_stage1[112], s_stage2[154], c_stage2[154]);
full_adder full_adder133 (c_stage1[113], c_stage1[114], s_stage1[54], s_stage2[155], c_stage2[155]);

half_adder half_adder21 (s_stage1[117], s_stage1[118], s_stage2[156], c_stage2[156]);
full_adder full_adder134 (c_stage1[115], c_stage1[116], s_stage1[58], s_stage2[157], c_stage2[157]);

half_adder half_adder22 (s_stage1[119], s_stage1[120], s_stage2[158], c_stage2[158]);
full_adder full_adder135 (c_stage1[117], c_stage1[118], s_stage1[62], s_stage2[159], c_stage2[159]);

full_adder full_adder136 (s_stage1[122], c_stage1[119], c_stage1[120], s_stage2[160], c_stage2[160]);

full_adder full_adder137 (s_stage1[124], c_stage1[121], c_stage1[122], s_stage2[161], c_stage2[161]);

full_adder full_adder138 (s_stage1[126], c_stage1[123], c_stage1[124], s_stage2[162], c_stage2[162]);

full_adder full_adder139 (s_stage1[127], c_stage1[125], c_stage1[126], s_stage2[163], c_stage2[163]);

half_adder half_adder23 (s_stage2[128], c_stage1[127], s_stage2[164], c_stage2[164]);

half_adder half_adder24 (s_stage2[129], c_stage2[128], s_stage2[165], c_stage2[165]);

half_adder half_adder25 (s_stage1[78], c_stage2[129], s_stage2[166], c_stage2[166]);

/////////////////////////////////////////////////////////////////
//////////////////////////// STAGE 3 ////////////////////////////
/////////////////////////////////////////////////////////////////
half_adder half_adder26 (s_stage2[131], c_stage2[130], s_stage2[167], c_stage2[167]);

half_adder half_adder27 (s_stage2[132], c_stage2[131], s_stage2[168], c_stage2[168]);

half_adder half_adder28 (s_stage2[133], c_stage2[132], s_stage2[169], c_stage2[169]);

full_adder full_adder140 (s_stage2[134], c_stage2[133], c_stage1[85], s_stage2[170], c_stage2[170]);

full_adder full_adder141 (s_stage2[135], c_stage2[134], c_stage1[87], s_stage2[171], c_stage2[171]);

full_adder full_adder142 (s_stage2[136], s_stage2[137], c_stage2[135], s_stage2[172], c_stage2[172]);

full_adder full_adder143 (s_stage2[138], s_stage2[139], c_stage2[136], s_stage2[173], c_stage2[173]);

full_adder full_adder144 (s_stage2[140], s_stage2[141], c_stage2[138], s_stage2[174], c_stage2[174]);

full_adder full_adder145 (s_stage2[142], s_stage2[143], c_stage2[140], s_stage2[175], c_stage2[175]);

full_adder full_adder146 (s_stage2[144], s_stage2[145], c_stage2[142], s_stage2[176], c_stage2[176]);

full_adder full_adder147 (s_stage2[146], s_stage2[147], c_stage2[144], s_stage2[177], c_stage2[177]);
half_adder half_adder29 (c_stage2[145], c_stage1[34], s_stage2[178], c_stage2[178]);

full_adder full_adder148 (s_stage2[148], s_stage2[149], c_stage2[146], s_stage2[179], c_stage2[179]);
full_adder full_adder149 (c_stage2[147], c_stage1[39], pp[0][15], s_stage2[180], c_stage2[180]);

full_adder full_adder150 (s_stage2[150], s_stage2[151], c_stage2[148], s_stage2[181], c_stage2[181]);
full_adder full_adder151 (c_stage2[149], c_stage1[44], pp[1][15], s_stage2[182], c_stage2[182]);

full_adder full_adder152 (s_stage2[152], s_stage2[153], c_stage2[150], s_stage2[183], c_stage2[183]);
full_adder full_adder153 (c_stage2[151], pp[15][2], pp[2][15], s_stage2[184], c_stage2[184]);

full_adder full_adder154 (s_stage2[154], s_stage2[155], c_stage2[152], s_stage2[185], c_stage2[185]);
full_adder full_adder155 (c_stage2[153], c_stage1[53], pp[3][15], s_stage2[186], c_stage2[186]);

full_adder full_adder156 (s_stage2[156], s_stage2[157], c_stage2[154], s_stage2[187], c_stage2[187]);
full_adder full_adder157 (c_stage2[155], c_stage1[57], pp[4][15], s_stage2[188], c_stage2[188]);

full_adder full_adder158 (s_stage2[158], s_stage2[159], c_stage2[156], s_stage2[189], c_stage2[189]);
full_adder full_adder159 (c_stage2[157], pp[15][5], pp[5][15], s_stage2[190], c_stage2[190]);

full_adder full_adder160 (s_stage2[160], c_stage2[158], c_stage2[159], s_stage2[191], c_stage2[191]);
full_adder full_adder161 (s_stage1[121], c_stage1[64], pp[6][15], s_stage2[192], c_stage2[192]);

half_adder half_adder52 (s_stage2[161], c_stage2[160], s_stage2[193], c_stage2[193]);
full_adder full_adder162 (s_stage1[123], c_stage1[67], pp[7][15], s_stage2[194], c_stage2[194]);

half_adder half_adder30 (s_stage2[162], c_stage2[161], s_stage2[195], c_stage2[195]);
full_adder full_adder163 (s_stage1[125], pp[15][8], pp[8][15], s_stage2[196], c_stage2[196]);

full_adder full_adder164 (c_stage2[162], c_stage1[72], pp[9][15], s_stage2[197], c_stage2[197]);

full_adder full_adder165 (c_stage2[163], c_stage1[74], pp[10][15], s_stage2[198], c_stage2[198]);

full_adder full_adder166 (c_stage2[164], pp[15][11], pp[11][15], s_stage2[199], c_stage2[199]);

full_adder full_adder221 (c_stage2[165], c_stage1[77], pp[12][15], s_stage2[200], c_stage2[200]);

full_adder full_adder222 (s_stage1[79], c_stage1[78], pp[13][15], s_stage2[201], c_stage2[201]);

full_adder full_adder223 (pp[15][14], pp[14][15], c_stage1[79], s_stage2[202], c_stage2[202]);

/////////////////////////////////////////////////////////////////
//////////////////////////// STAGE 4 ////////////////////////////
/////////////////////////////////////////////////////////////////
half_adder half_adder31 (s_stage2[168], c_stage2[167], s_stage2[203], c_stage2[203]);
half_adder half_adder32 (s_stage2[169], c_stage2[168], s_stage2[204], c_stage2[204]);
half_adder half_adder33 (s_stage2[170], c_stage2[169], s_stage2[205], c_stage2[205]);
half_adder half_adder34 (s_stage2[171], c_stage2[170], s_stage2[206], c_stage2[206]);
half_adder half_adder35 (s_stage2[172], c_stage2[171], s_stage2[207], c_stage2[207]);
full_adder full_adder167 (s_stage2[173], c_stage2[172], c_stage2[137], s_stage2[208], c_stage2[208]);
full_adder full_adder168 (s_stage2[174], c_stage2[173], c_stage2[139], s_stage2[209], c_stage2[209]);
full_adder full_adder169 (s_stage2[175], c_stage2[174], c_stage2[141], s_stage2[210], c_stage2[210]);
full_adder full_adder170 (s_stage2[176], c_stage2[175], c_stage2[143], s_stage2[211], c_stage2[211]);
full_adder full_adder171 (s_stage2[177], s_stage2[178], c_stage2[176], s_stage2[212], c_stage2[212]);
full_adder full_adder172 (s_stage2[179], s_stage2[180], c_stage2[177], s_stage2[213], c_stage2[213]);
full_adder full_adder173 (s_stage2[181], s_stage2[182], c_stage2[179], s_stage2[214], c_stage2[214]);
full_adder full_adder174 (s_stage2[183], s_stage2[184], c_stage2[181], s_stage2[215], c_stage2[215]);
full_adder full_adder175 (s_stage2[185], s_stage2[186], c_stage2[183], s_stage2[216], c_stage2[216]);
full_adder full_adder176 (s_stage2[187], s_stage2[188], c_stage2[185], s_stage2[217], c_stage2[217]);
full_adder full_adder177 (s_stage2[189], s_stage2[190], c_stage2[187], s_stage2[218], c_stage2[218]);
full_adder full_adder178 (s_stage2[191], s_stage2[192], c_stage2[189], s_stage2[219], c_stage2[219]);
full_adder full_adder179 (s_stage2[193], s_stage2[194], c_stage2[191], s_stage2[220], c_stage2[220]);
full_adder full_adder180 (s_stage2[195], s_stage2[196], c_stage2[193], s_stage2[221], c_stage2[221]);
full_adder full_adder181 (s_stage2[197], c_stage2[195], c_stage2[196], s_stage2[222], c_stage2[222]);
half_adder half_adder36 (s_stage2[198], c_stage2[197], s_stage2[223], c_stage2[223]);
half_adder half_adder37 (s_stage2[199], c_stage2[198], s_stage2[224], c_stage2[224]);
half_adder half_adder38 (s_stage2[200], c_stage2[199], s_stage2[225], c_stage2[225]);
half_adder half_adder39 (s_stage2[201], c_stage2[200], s_stage2[226], c_stage2[226]);

/////////////////////////////////////////////////////////////////
//////////////////////////// STAGE 5 ////////////////////////////
/////////////////////////////////////////////////////////////////
half_adder half_adder40 (s_stage2[204], c_stage2[203], s_stage2[227], c_stage2[227]);
half_adder half_adder41 (s_stage2[205], c_stage2[204], s_stage2[228], c_stage2[228]);
half_adder half_adder42 (s_stage2[206], c_stage2[205], s_stage2[229], c_stage2[229]);
half_adder half_adder43 (s_stage2[207], c_stage2[206], s_stage2[230], c_stage2[230]);
half_adder half_adder44 (s_stage2[208], c_stage2[207], s_stage2[231], c_stage2[231]);
half_adder half_adder45 (s_stage2[209], c_stage2[208], s_stage2[232], c_stage2[232]);
half_adder half_adder46 (s_stage2[210], c_stage2[209], s_stage2[233], c_stage2[233]);
half_adder half_adder47 (s_stage2[211], c_stage2[210], s_stage2[234], c_stage2[234]);
half_adder half_adder48 (s_stage2[212], c_stage2[211], s_stage2[235], c_stage2[235]);
full_adder full_adder182 (s_stage2[213], c_stage2[212], c_stage2[178], s_stage2[236], c_stage2[236]);
full_adder full_adder183 (s_stage2[214], c_stage2[213], c_stage2[180], s_stage2[237], c_stage2[237]);
full_adder full_adder184 (s_stage2[215], c_stage2[214], c_stage2[182], s_stage2[238], c_stage2[238]);
full_adder full_adder185 (s_stage2[216], c_stage2[215], c_stage2[184], s_stage2[239], c_stage2[239]);
full_adder full_adder186 (s_stage2[217], c_stage2[216], c_stage2[186], s_stage2[240], c_stage2[240]);
full_adder full_adder187 (s_stage2[218], c_stage2[217], c_stage2[188], s_stage2[241], c_stage2[241]);
full_adder full_adder188 (s_stage2[219], c_stage2[218], c_stage2[190], s_stage2[242], c_stage2[242]);
full_adder full_adder189 (s_stage2[220], c_stage2[219], c_stage2[192], s_stage2[243], c_stage2[243]);
full_adder full_adder190 (s_stage2[221], c_stage2[220], c_stage2[194], s_stage2[244], c_stage2[244]);
full_adder full_adder191 (s_stage2[222], c_stage2[221], s_stage2[163], s_stage2[245], c_stage2[245]);
full_adder full_adder192 (s_stage2[223], c_stage2[222], s_stage2[164], s_stage2[246], c_stage2[246]);
full_adder full_adder193 (s_stage2[224], c_stage2[223], s_stage2[165], s_stage2[247], c_stage2[247]);
full_adder full_adder194 (s_stage2[225], c_stage2[224], s_stage2[166], s_stage2[248], c_stage2[248]);
full_adder full_adder195 (s_stage2[226], c_stage2[225], c_stage2[166], s_stage2[249], c_stage2[249]);
full_adder full_adder196 (s_stage2[202], c_stage2[226], c_stage2[201], s_stage2[250], c_stage2[250]);
half_adder half_adder49 (c_stage2[202], pp[15][15], s_stage2[251], c_stage2[251]);

/////////////////////////////////////////////////////////////////
//////////////////////////// STAGE 6 ////////////////////////////
/////////////////////////////////////////////////////////////////
half_adder half_adder50 (s_stage2[228], c_stage2[227], s_stage2[252], c_stage2[252]);
full_adder full_adder197 (s_stage2[229], c_stage2[228], c_stage2[252], s_stage2[253], c_stage2[253]);
full_adder full_adder198 (s_stage2[230], c_stage2[229], c_stage2[253], s_stage2[254], c_stage2[254]);
full_adder full_adder199 (s_stage2[231], c_stage2[230], c_stage2[254], s_stage2[255], c_stage2[255]);
full_adder full_adder200 (s_stage2[232], c_stage2[231], c_stage2[255], s_stage2[256], c_stage2[256]);
full_adder full_adder201 (s_stage2[233], c_stage2[232], c_stage2[256], s_stage2[257], c_stage2[257]);
full_adder full_adder202 (s_stage2[234], c_stage2[233], c_stage2[257], s_stage2[258], c_stage2[258]);
full_adder full_adder203 (s_stage2[235], c_stage2[234], c_stage2[258], s_stage2[259], c_stage2[259]);
full_adder full_adder204 (s_stage2[236], c_stage2[235], c_stage2[259], s_stage2[260], c_stage2[260]);
full_adder full_adder205 (s_stage2[237], c_stage2[236], c_stage2[260], s_stage2[261], c_stage2[261]);
full_adder full_adder206 (s_stage2[238], c_stage2[237], c_stage2[261], s_stage2[262], c_stage2[262]);
full_adder full_adder207 (s_stage2[239], c_stage2[238], c_stage2[262], s_stage2[263], c_stage2[263]);
full_adder full_adder208 (s_stage2[240], c_stage2[239], c_stage2[263], s_stage2[264], c_stage2[264]);
full_adder full_adder209 (s_stage2[241], c_stage2[240], c_stage2[264], s_stage2[265], c_stage2[265]);
full_adder full_adder210 (s_stage2[242], c_stage2[241], c_stage2[265], s_stage2[266], c_stage2[266]);
full_adder full_adder211 (s_stage2[243], c_stage2[242], c_stage2[266], s_stage2[267], c_stage2[267]);
full_adder full_adder212 (s_stage2[244], c_stage2[243], c_stage2[267], s_stage2[268], c_stage2[268]);
full_adder full_adder213 (s_stage2[245], c_stage2[244], c_stage2[268], s_stage2[269], c_stage2[269]);
full_adder full_adder214 (s_stage2[246], c_stage2[245], c_stage2[269], s_stage2[270], c_stage2[270]);
full_adder full_adder215 (s_stage2[247], c_stage2[246], c_stage2[270], s_stage2[271], c_stage2[271]);
full_adder full_adder216 (s_stage2[248], c_stage2[247], c_stage2[271], s_stage2[272], c_stage2[272]);
full_adder full_adder217 (s_stage2[249], c_stage2[248], c_stage2[272], s_stage2[273], c_stage2[273]);
full_adder full_adder218 (s_stage2[250], c_stage2[249], c_stage2[273], s_stage2[274], c_stage2[274]);
full_adder full_adder219 (s_stage2[251], c_stage2[250], c_stage2[274], s_stage2[275], c_stage2[275]);
full_adder full_adder224 (1'b1, c_stage2[251], c_stage2[275], s_stage2[276], c_stage2[276]);

// Assign the final product bits
assign result[0] = pp[0][0];
assign result[1] = s_stage1[0];
assign result[2] = s_stage1[80];
assign result[3] = s_stage2[130];
assign result[4] = s_stage2[167];
assign result[5] = s_stage2[203];
assign result[6] = s_stage2[227];
assign result[7] = s_stage2[252];
assign result[8] = s_stage2[253];
assign result[9] = s_stage2[254];
assign result[10] = s_stage2[255];
assign result[11] = s_stage2[256];
assign result[12] = s_stage2[257];
assign result[13] = s_stage2[258];
assign result[14] = s_stage2[259];
assign result[15] = s_stage2[260];
assign result[16] = s_stage2[261];
assign result[17] = s_stage2[262];
assign result[18] = s_stage2[263];
assign result[19] = s_stage2[264];
assign result[20] = s_stage2[265];
assign result[21] = s_stage2[266];
assign result[22] = s_stage2[267];
assign result[23] = s_stage2[268];
assign result[24] = s_stage2[269];
assign result[25] = s_stage2[270];
assign result[26] = s_stage2[271];
assign result[27] = s_stage2[272];
assign result[28] = s_stage2[273];
assign result[29] = s_stage2[274];
assign result[30] = s_stage2[275];
assign result[31] = s_stage2[276];

endmodule
