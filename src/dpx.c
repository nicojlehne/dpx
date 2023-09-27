#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include "dpx.h"

#define ERR_NOARG   1       /* NO ARGUMENTS */
#define OK_SUCC     0       /* OK SUCCESS   */

int main(int argc, char ** argv) {
    if (argc > 1) {
        float floaty = atof(argv[1]);
        printf("ldpi    (120-159dpi) : %.3fpx\n", floaty * ldpi);
        printf("mdpi    (120-159dpi) : %.3fpx\n", floaty * mdpi);
        printf("tvdpi   (120-159dpi) : %.3fpx\n", floaty * tvdpi);
        printf("hdpi    (120-159dpi) : %.3fpx\n", floaty * hdpi);
        printf("xhdpi   (120-159dpi) : %.3fpx\n", floaty * xhdpi);
        printf("xxhdpi  (120-159dpi) : %.3fpx\n", floaty * xxhdpi);
        printf("xxxhdpi (120-159dpi) : %.3fpx\n", floaty * xxxhdpi);
        if (argc > 2) {
            if (strcmp(argv[2], "--rem") == 0) {
                const float multiplier = 0.0625;
                floaty = floaty * multiplier;
                printf("^ to REM v\n");
                printf("ldpi    : %.3frem\n", floaty * ldpi);
                printf("mdpi    : %.3frem\n", floaty * mdpi);
                printf("tvdpi   : %.3frem\n", floaty * tvdpi);
                printf("hdpi    : %.3frem\n", floaty * hdpi);
                printf("xhdpi   : %.3frem\n", floaty * xhdpi);
                printf("xxhdpi  : %.3frem\n", floaty * xxhdpi);
                printf("xxxhdpi : %.3frem\n", floaty * xxxhdpi);
            } else if (strcmp(argv[2], "--dp") == 0) {
                printf("^ to DP v\n");
                printf("ldpi    : %.3fdp\n", floaty * ldpi);
                printf("mdpi    : %.3fdp\n", floaty * mdpi);
                printf("tvdpi   : %.3fdp\n", floaty * tvdpi);
                printf("hdpi    : %.3fdp\n", floaty * hdpi);
                printf("xhdpi   : %.3fdp\n", floaty * xhdpi);
                printf("xxhdpi  : %.3fdp\n", floaty * xxhdpi);
                printf("xxxhdpi : %.3fdp\n", floaty * xxxhdpi);
            }
        } else ;
    } else {
        printf("Use: dpx [number]\n");
        return ERR_NOARG;
    }
    return OK_SUCC;
    
}