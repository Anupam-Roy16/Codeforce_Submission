#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,t,q,n,i,j,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m>>q;
        int a[m];
        for(j=0;j<m;j++)
        {
            cin>>a[j];
        }
        sort(a,a+m);
        int p=0;
        for(j=1;;j++)
        {
            int w=0;
            for(k=0;k<m;k++)
            {
                if(j==a[k])
                {
                    w++;
                    break;
                }

            }
            if(w==0)
            {
                p++;
            }
            if(p>q)
            {
                break;
            }
        }
        cout<<j-1<<endl;
    }

    return 0;
}
