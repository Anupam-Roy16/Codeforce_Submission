#include<stdio.h>
int main()
{
    int n,i=1,count=0;
    char s[20];
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%s",s);
        if(s[0]=='+'||s[2]=='+')
        {
            count++;
        }
     i++;

    }
    printf("%d\n",(count-n+count));
}
