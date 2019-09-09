#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,k,i;
    scanf("%d",&n);
    scanf("%d",&p);
    scanf("%d",&k);

    if((p-k)<1 || (p-k)==1)
    {
        for(i=1;i<p;i++)
        printf("%d ",i);
    }
    else{
        printf("<< ");
        for(i=p-k;i<p;i++)
            printf("%d ",i);
    }
    printf("(");
    printf("%d",p);
    printf(") ");

    if((p+k)>n || (p+k)==n)
    {
        for(i=p+1;i<n+1;i++)
            printf("%d ",i);
    }
    else{
        for(i=p+1;i<p+k+1;i++)
        {
            printf("%d ",i);
        }
        printf(">>");
    }
}
