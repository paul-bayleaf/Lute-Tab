
#define REGS 30			/* number of registers */
#define NUM 12700000 
#define DENOM 473628672

#define SET_CHAR_0 0
#define SET1 128
#define SET_RULE 132
#define PUT1 133
#define PUT_RULE 137
#define NO_OP 138
#define BOP 139			/* 0213 */
#define EOP 140			/* 0214 */
#define PUSH 141
#define POP 142
#define RIGHT1 143
#define RIGHT2 144
#define RIGHT3 145
#define RIGHT4 146
#define W0 147
#define W1 148
#define X0 152
#define X1 153
#define DOWN1 157
#define DOWN2 158
#define DOWN3 159
#define DOWN4 160
#define Y0 161
#define Y1 162
#define Z0 166
#define Z1 167
#define FNT_NUM_0 171		/* 0253 */
#define FNT1 235		/* 0353 */
#define FNT_DEF1 243		/* 0363 */
#define PRE 247
#define POST 248
#define POST_POST 249

#define MAXFONTS 6
#define MAXWIDTHS 256
#define MAX_W_VAL 64
#define NAME_SIZE 20
#define MAX_H_VAL 16

struct font_d {
    short f_l;			/* length */
    short f_lh;			/* header length */
    int   f_bc;			/* beginning character */
    int   f_ec;			/* end character */
    short f_nw;			/* number of different width sizes */
    short f_nh;			/* number of different heights */
    short f_nd;
    short f_ics;
    short f_ligproglen;
    short f_kerns;
    short f_extproglen;
    short f_params;
    int   f_name;		/* starting position of font name */
    char  names[NAME_SIZE];
    int   f_check_sum;
    int   f_scaled_size;
    int   f_design_size;
    int   n_widths;		/* number of characters in font */
    int   f_widths[MAXWIDTHS];	/* font width table */
    double f_width[MAX_W_VAL];	/* the widths as double  */
    int   f_i_width[MAX_W_VAL];	/* the widths as int */
    int   f_heights[MAXWIDTHS];
    double f_height[MAX_H_VAL];
    int   f_i_height[MAX_H_VAL];
    int   f_depths[MAXWIDTHS];
    double f_depth[MAX_H_VAL];
};

