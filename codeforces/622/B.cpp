#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,i,j,k;
    char c;
    cin>>n>>c>>m;
    cin>>t;
    k=t/60;
    t%=60;
    m+=t;
    j=m/60;
    m%=60;
    n+=(k+j);
    n%=24;
    if(n<10)
    {
        cout<<"0"<<n<<":";
    }
    else{
        cout<<n<<":";
    }
    if(m<10)
    {
        cout<<"0"<<m;
    }
    else{
        cout<<m;
    }
    cout<<endl;
}

