#include<cstdio>
#include<cmath>

int main()
{
    long long int num;
    scanf("%lld",&num);
    long long int i;
    long long int sum=0;
    if(num%2==0)
    {
        sum=num/2;
    }
    else
    {
        sum=((num+1)/2)*(-1);
    }
    printf("%lld\n",sum);
    return 0;
}
