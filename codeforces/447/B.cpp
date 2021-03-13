#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b[26],i,j,p=0,t,k=0,f;
    char a[1001];
    cin>>a;
    cin>>n;
    for(i=0;i<26;i++)
    {
        cin>>b[i];
        if(b[i]>p)
        {
            p=b[i];
        }
    }
    j=strlen(a);
    for(i=0;i<j;i++)
    {
        t=(int)a[i]-97;
        k+=(b[t]*(i+1));
    }
    f=i;
    for(i=0;i<n;i++)
    {
        k+=(p*(i+f+1));
    }
    cout<<k<<endl;
}
