#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q=-1,p,i,n,j;
    cin>>n;
    char a[n+1];
    cin>>a;
    char d,c;
    for(i=0;i<n-1;i++)
    {
        p=0;
        for(j=0;j<n-1;j++)
        {
            if((a[i]==a[j])&&(a[i+1]==a[j+1]))
            {
                p++;
            }
        }
        if(p>q)
        {
          c=a[i];
          d=a[i+1];
          q=p;
        }
    }
    cout<<c<<d<<endl;



    return 0;
}
