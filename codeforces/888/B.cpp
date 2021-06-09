#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,u=0,d=0,l=0,r=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='U')
        {
            u++;
        }
        else if(s[i]=='D')
        {
            d++;
        }
        else if(s[i]=='L')
        {
            l++;
        }
        else if(s[i]=='R')
        {
            r++;
        }
    }
    u=min(u,d);
    l=min(l,r);
    cout<<(u+l)*2<<endl;
}
