#include<stdio.h>
int main()
{
    int n,i,a[100];
    double p,sum=0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    p=(sum*100)/(n*100);
    printf("%f\n",p);
}
