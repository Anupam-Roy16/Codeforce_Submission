#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m,p=0;
    cin>>n>>m;
    char a[n+1];
    cin>>a;
    for(i=0;((i<n)&&(p<m));i++)
    {
        if(i==0)
        {
            if(a[i]!='1')
            {
                a[i]='1';
                p++;
            }
            if((a[i]=='1')&&(n==1))
            {
              a[i]='0';
              p++;
            }
        }
        else{
            if(a[i]!='0')
            {
                a[i]='0';
                p++;
            }
        }

    }
    cout<<a<<endl;
    return 0;
}
