#include<stdio.h>
int main()
{
    int N,ld,fd,sum;
    scanf("%d",&N);
    ld=N%10;
        while(N!=0)
        {
            fd=N;
            N=N/10;
        }
        sum=fd+ld;
        {
            printf("%d",sum);
        }
        
    
}