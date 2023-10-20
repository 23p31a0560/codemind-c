#include<stdio.h>
int main()
{
    int sec,hr,min,s;
    scanf("%d",&sec);
    hr=(sec/3600);
    min=(sec-(3600*hr))/60;
    s=(sec-(3600*hr)-(min*60));
    printf("H:M:S-%d:%d:%d",hr,min,s);
}