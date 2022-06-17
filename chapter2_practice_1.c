#include <stdio.h>
int main()
{
    int x, y, Z, K;
    float x1, x2, x3, x4;
    // 1ST PRIORITY=*,/,%
    // 2ND PRIORITY =-,+
    // 3RD PRIORITY =
    printf("GIVE A VALUE TO X\n");
    scanf("%d", &x);
    printf("GIVE A VALUE TO Y\n");
    scanf("%d", &y);
    printf("GIVE A VALUE TO Z\n");
    scanf("%d", &Z);
    printf("AT LAST NOW GIVE A VALUE TO K\n");
    scanf("%d", &K);
    printf("NOW THE RESULT IS %d\n", y - Z + 3 * x / K);
    printf("NOW IT'S TIME TO DO THE SAME IN FLOATING POINT NUMBER");
    printf("GIVE A FLOATING POINT NUMBER TO X1");
    scanf("%f", &x1);
    printf("GIVE A FLOATING POINT NUMBER TO X2");
    scanf("%f", &x2);
    printf("GIVE A FLOATING POINT NUMBER TO X3");
    scanf("%f", &x3);
    printf("GIVE A FLOATING POINT NUMBER TO X4");
    scanf("%f", x4);
    printf("SO NOW THE RESULT OF THESE FLOATING POINT NUMBER IS %f", x2 - x3 + 3 * x1 / x4);
}