#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n,m;
    cin>>n>>m;
    if(n<27)
    {
    unsigned long long l=pow(2,n);
    cout<<m%l<<endl;
    }
    else{
        cout<<m<<endl;
    }
    return 0;
}
