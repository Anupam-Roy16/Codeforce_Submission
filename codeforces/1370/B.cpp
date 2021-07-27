#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p,q,n,i,j,m;
    cin>>n;
    while(n--)
    {
        int p;
        cin>>p;
        p*=2;
        int u=p-2;
        int d[u],a[p],b[u],c[u];
        q=0;
        int r=0;
        int z,y;
        for(i=0;i<p;i++)
        {
            cin>>a[i];
            if(a[i]%2!=0)
            {
                b[q]=i+1;
                q++;
            }
            else{
                c[r]=i+1;
                r++;
            }
        }
        for(j=0;j<q;j++)
        {
            d[j]=b[j];
        }
        for(j=0;j<r;j++)
        {
            d[q+j]=c[j];
        }

        int t=0;
        if(q%2!=0)
        {
            for(i=1;i<p-1;i+=2)
            {
                cout<<d[i]<<" "<<d[i+1]<<endl;
            }

        }
        else{
            for(i=2;i<p;i+=2)
            {
                cout<<d[i]<<" "<<d[i+1]<<endl;
            }
        }


    }
}
