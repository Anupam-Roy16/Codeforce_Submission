#include<stdio.h>
int main()
{
    int n,a,b,c,count=0,i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a==1)
        {
            if(b==1)
            {
                if(c==1||c==0)
                {
                count++;
                }
            }
            else
            {
                if(c==1)
                {
                    count++;
                }
            }
        }
        else
        {
            if(b==1 && c==1)
            {
                count++;
            }
        }
        i++;
    }
    printf("%d\n",count);
}
