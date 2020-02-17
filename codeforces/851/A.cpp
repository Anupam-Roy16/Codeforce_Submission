#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t,i,l;
    cin>>n>>k>>t;
    if((t>0)&&(t<=k))
    {
        cout<<t<<endl;
    }
    else if(t==0)
    {
        cout<<"0"<<endl;
    }
    else if((t>k)&&(t<=n))
    {
        cout<<k<<endl;
    }
    else{
        cout<<k-(t-n)<<endl;
    }


    return 0;
}
