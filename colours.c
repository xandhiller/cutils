/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    Create colours in the terminal.
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define NORMAL          "\033[0m"
#define BOLD            "\033[1m"
#define DIM             "\033[2m"
#define UNDERLINE       "\033[4m"
#define BLINK           "\033[5m"
#define INVERTED        "\033[7m"
#define HIDDEN          "\033[8m"
#define BLACK           "\033[30m"
#define RED             "\033[31m"
#define GREEN           "\033[32m"
#define YELLOW          "\033[33m"
#define BLUE            "\033[34m"
#define MAGENTA         "\033[35m"
#define CYAN            "\033[36m"
#define L_GREY          "\033[37m"
#define D_GREY          "\033[90m"
#define L_RED           "\033[91m"
#define L_GREEN         "\033[92m"
#define L_YELLOW        "\033[93m"
#define L_BLUE          "\033[94m"
#define L_MAGENTA       "\033[95m"
#define L_CYAN          "\033[96m"
#define WHITE           "\033[97m"
#define BG_DEFAULT      "\033[49m"
#define BG_BLACK        "\033[40m"
#define BG_RED          "\033[41m"
#define BG_GREEN        "\033[42m"
#define BG_YELLOW       "\033[43m"
#define BG_BLUE         "\033[44m"
#define BG_MAGENTA      "\033[45m"
#define BG_CYAN         "\033[46m"
#define BG_L_GREY       "\033[47m"
#define BG_D_GREY       "\033[100m"
#define BG_L_RED        "\033[101m"
#define BG_L_GREEN      "\033[102m"
#define BG_L_YELLOW     "\033[103m"
#define BG_L_BLUE       "\033[104m"
#define BG_L_MAGENTA    "\033[105m"
#define BG_L_CYAN       "\033[106m"
#define BG_WHITE        "\033[107m"

void set_col(const char code[]);
void reset_col(void);

int
main (int argc, char *argv[]) {
    set_col(CYAN);
    printf("test text\n"); 
    return 0;
}

void set_col(const char code[]) {
    printf("%s", code); 
}

void reset_col(void) {
    printf("%s", NORMAL); 
}
