#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p,q;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p;
        int j,a[p];
        unsigned long long t=0,w=0,n=0,v=0;
        for(j=0;j<p;j++)
        {
            cin>>a[j];
            if((a[j]%2)==0)
            {
                t++;
            }
            else{
                w++;
            }
        }
        cin>>q;
        int b[q];
        for(j=0;j<q;j++)
        {
            cin>>b[j];
            if((b[j]%2)==0)
            {
                n++;
            }
            else{
                v++;
            }
        }
        cout<<((t*n)+(w*v))<<endl;



    }

}
