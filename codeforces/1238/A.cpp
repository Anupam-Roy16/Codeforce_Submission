#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        unsigned long long a,b;
        cin>>a>>b;
        a=a-b;
        if(a!=1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
