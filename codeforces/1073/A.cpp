#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,p,q,r,s,e,m,j,t;
    cin>>t;
    char a[t+1];
    cin>>a;
    for(i=1;i<t;i++)
    {
        if(a[i-1]!=a[i])
        {

            break;
        }
    }
    
    if(i==t)
    {
        cout<<"NO"<<endl;
    }
    else{

        cout<<"YES"<<endl<<a[i-1]<<a[i]<<endl;
    }
}




