#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i;
    cin>>n;
    if((n%2)!=0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    m=n/2;
    if((m%2)!=0)
    {
      m--;
    }
    else{
        m-=2;
    }
    m-=2;
    m=m/2;
    cout<<m+1<<endl;
    return 0;
}
