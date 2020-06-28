#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        int k=c%a;
        if(k==b)
        {
            cout<<c<<endl;
        }
        else if(k>b)
        {
            k-=b;
            cout<<c-k<<endl;
        }
        else{
            k+=(a-b);
            cout<<c-k<<endl;
        }

    }

	return 0;
}
