#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p,q,r=0,t;
    cin>>n>>p>>q;
    int a[n+1];
    a[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    if(p==q)
    {
        cout<<"0"<<endl;
    }
    else{
        for(i=p;;)
        {
            if(a[i]==q)
            {
                cout<<r+1<<endl;
                break;
            }
            else{
                r++;
                i=a[i];
                if(i==p)
                {
                    cout<<"-1"<<endl;
                    break;
                }
            }
        }
    }

}
