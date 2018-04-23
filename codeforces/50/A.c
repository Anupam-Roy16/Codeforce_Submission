#include<stdio.h>
int main()
{
    int m,n,r;
    scanf("%d%d",&m,&n);
    if((m%2)==0)
    {
        r=(m/2)*(n);
        printf("%d\n",r);
    }
    else
    {
         r=((int)(m/2))*n+(int)(n/2);
         printf("%d\n",r);
    }
}
