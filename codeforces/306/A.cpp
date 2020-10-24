#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,p,q;
    cin>>n>>p;
    q=n%p;
    if(q==0)
    {
        for(i=0;i<p;i++)
        {
            cout<<n/p;
            if(i!=(p-1))
            {
                cout<<" ";
            }
            else{
                cout<<endl;
            }
        }
    }
    else{
    j=p-q;
    n/=p;
    for(i=0;i<j;i++)
    {
        cout<<n<<" ";
    }
    for(i=0;i<q;i++)
    {
        cout<<n+1;
        if(i!=(q-1))
        {
            cout<<" ";
        }
        else{
            cout<<endl;
        }
    }
    }



}
