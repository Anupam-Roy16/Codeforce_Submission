#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0,q,n,p,i,r,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p>>q;
        if(i==0)
        {
            r=q;
            t+=(p*q);
        }
        else{
            if(q>r)
            {
                t+=(p*r);
            }
            else{
                t+=(p*q);
                r=q;
            }
        }
    }
    cout<<t<<endl;



    return 0;
}
