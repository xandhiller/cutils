/*******************************************************************************
* Author: Alex Hiller
* Year: 2019
*
* Program Description: 
*    Run length encoding
*
*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
/*******************************************************************************/
#define TRUE    1
#define FALSE   0
/* #define DEBUG */ 
typedef int bool;
/*******************************************************************************/
int getPrintNb (char rle_str[], int ind);
bool isin(char letter, char str[]);
char* rle_decode(char encoded[]);
/*******************************************************************************/
int
main (int argc, char *argv[]) {
    char encoded[] = "u3000y50l55";
    printf("%s\n", rle_decode(encoded));
    return 0;
}
/*******************************************************************************/
char* 
rle_decode(char encoded[]) {
    /* TODO: Must make size of decoded change dynamically. */
    char* decoded = (char*)calloc(10000, sizeof(char));
    char c[2] = {'\0','\0'}; /* Needs to be formatted like this for strcat */
    int i,j, ind, nb, len = strlen(encoded);
    for (i=0, ind=0, nb=0; i<len; i++) {
        c[0] = encoded[ind];
        nb = getPrintNb(encoded, ind+1);
        for (j=0; j<nb; j++) {
            strcat(decoded, c);
        }
        if (nb!=0) /* Can't take log of zero */
            ind+=2+((int)log10(nb));
        else
            ind+=2;
    } 
    return decoded;
}

int 
getPrintNb (char rle_str[], int ind){
    char nb_chars[] = {'0','1','2','3','4','5','6','7','8','9'};
    char buf[1000] = {'\0'};
    int i, len=strlen(rle_str);
    for (i=0; ind<len && isin(rle_str[ind], nb_chars); i++) {
        char tmp[2] = {rle_str[ind],'\0'}; 
        strcat(buf, tmp);
        ind++;
    }
    /* Current index should be the number index. */
    /* Should check if the next char is also a number. */
    /* once all numbers in (may be a large number of repeats), then perform atoi. */
    /* null character will cause an extra zero to be added, so divide by 10. */
    return atoi(buf);
}


bool 
isin(char letter, char str[]) {
    int i, len = strlen(str);
    for (i=0; i<len; i++) {
        if (str[i] == letter) {
            return TRUE;
        }
    }
    return FALSE;
}
/*******************************************************************************/
