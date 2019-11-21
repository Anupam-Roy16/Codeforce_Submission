#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int l=0;
    for(int i=1;i<c+1;i++)
    {
        l=l+i*a;
    }
    if((l-b)<0)
    {
        cout<<"0"<<"\n";

    }
    else{
            cout<<l-b<<"\n";

    }
    return 0;
}
