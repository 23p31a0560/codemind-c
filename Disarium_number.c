#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d=0,e,f,i=0;
    scanf("%d",&a);
    e=a;
    f=a;
    while(f!=0)
    {
        f=f/10;
        i++;
    }
    while(e!=0)
    {
        b=e%10;
        e=e/10;
        c=pow(b,i);
        d=d+c;
        i--;
    }
    if(a==d)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}