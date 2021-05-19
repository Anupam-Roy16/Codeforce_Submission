#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q=0,r,i;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n-1;i++)
    {
        if(s[i]>s[i+1])
        {
            q++;
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<i+2<<endl;
            break;
        }
    }
    if(q==0)
    {
        cout<<"NO"<<endl;
    }
}
