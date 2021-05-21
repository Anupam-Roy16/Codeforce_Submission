#include<bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<pow(24,8)<<endl;
    unsigned long long p,q,j,m;
    cin>>p>>q;
    if(p==q)
    {
        cout<<"YES"<<endl<<"0"<<endl;
        return 0;
    }
    j=p;
    for(int i=1;;i++)
    {
        j*=p;
        if(j==q)
        {
            cout<<"YES"<<endl<<i<<endl;
            return 0;
        }
        if(j>q)
        {
            cout<<"NO"<<endl;
            break;
        }
    }
	return 0;
}
