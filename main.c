//
//          AUTHOR: ALI BARAN YENI
//      DEPARTMENT: COMPUTER ENGINEERING 
//  STUDENT NUMBER: ********************
//


#include <stdio.h>
#include <math.h>

int main() {
    printf("It's Baran's first C assignment! \n\n");

    float a = 5;
    float b = 16;
    float c = 4;
    
    float D = (b * b) - (4 * a * c);
    float x1, x2, rp, ip, r1, r2;

    printf("Delta is: %f \n\n", D);

    // True path in flowchart 
    if (D >= 0) {
        printf("Delta >= 0 \n");

        r1 = (-b + sqrt(D)) / (2 * a);
        r2 = (-b - sqrt(D)) / (2 * a);
    }
    
    // false path in flowchart
    else {
        ip = -b / (2 * a);
        rp = sqrt(-D)/(2*a);
        
        printf("x1 %f + j%f \n", (rp, ip));
        printf("x1 %f - j%f \n", (rp, ip));
        
    }
    
    //these two of lines should be placed under first if statement but I coded what flowchart pictured.
    printf("\n\nReal root 1 : %f \n", r1);        
    printf("Real root 2 : %f \n", r2);
 }
