#include<stdio.h>
int main()
{
    float x;
    int p,m;
    printf("GIVE A FLOAT NUMBER\n");
    scanf("%f",&x);
    printf("GIVE THE INTEGER NUMBER\n");
    scanf("%d", &p);
    printf("NOW GIVE THE SECOND INTEGER NUMBER\n");
    scanf("%d", &m);
    printf("SO NOW THE RESULT IS %f",x/p-m);
}