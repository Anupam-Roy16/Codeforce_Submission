#include<stdio.h>
int main()
{
    int x,i=5,sum=0,r;
    scanf("%d",&x);
    while(x%i!=0)
    {
     r=x/i;
     sum=sum+r;
     x=x%i;
     i--;
    }
    r=x/i;
    sum=sum+r;
    printf("%d\n",sum);
}
