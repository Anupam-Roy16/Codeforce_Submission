#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,p,q,i,j,y;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p>>q;
        a=min(p,q);
        b=max(p,q);
        int t=0;
        for(j=0;;j++)
        {
            t+=(b/a);
            if(b%a==0)
            {
                break;
            }
            y=b%a;
            b=a;
            a=y;

        }
        cout<<t<<endl;
    }



}




