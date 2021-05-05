#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int l,i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int r=0,q=0,p,a[91]={0};
        cin>>l;
        string s;
        cin>>s;
        for(j=0;j<l;j++)
        {
            p=(int)s[j];
            a[p]++;
        }
        for(j=0;j<l-1;j++)
        {
            if(s[j]==s[j+1])
            {
                q++;
            }
            else{
                p=(int)s[j];
                if(a[p]!=(q+1))
                {
                    r++;
                    cout<<"NO"<<endl;
                    break;
                }
                q=0;
            }
        }
        if(r==0)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}





















