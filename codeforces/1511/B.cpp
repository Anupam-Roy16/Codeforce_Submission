#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,r,n,i;
    cin>>n;
    int a[10]={0,2,13,103,1039,99991,999983,1000003,99999989,999999937};
    while(n--)
    {
        cin>>p>>q>>r;
        if(r==1)
        {

            cout<<a[p]<<" ";
            q--;
            cout<<"1";
            while(q--)
            {
                cout<<"0";
            }
            cout<<endl;
        }
        else{
            r--;
            p-=r;
            cout<<a[p];
            while(r--)
            {
                cout<<"0";
            }
            cout<<" ";
            cout<<"1";
            q--;
            while(q--)
            {
                cout<<"0";
            }
            cout<<endl;
        }
    }
}
