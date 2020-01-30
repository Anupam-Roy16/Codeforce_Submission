#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n,k;
    cin>>n>>k;

        unsigned long long l=n/k;
        if((l%2)==0)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    return 0;
}
