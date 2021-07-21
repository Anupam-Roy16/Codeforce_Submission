#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ul;

int main()
{
    ul a,b,n,i,m;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(b==1)
        {
            cout<<"NO"<<endl;
        }
        else if(b==2){
                cout<<"YES"<<endl;
           cout<<a<<" "<<a*3<<" "<<a*4<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<a<<" "<<a*(b-1)<<" "<<a*b<<endl;
        }
    }
}
