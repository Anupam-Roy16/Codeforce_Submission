#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    unsigned long long n,p,m,k,q,u,w;
    cin>>w;
    for(i=0;i<w;i++)
    {
        cin>>m>>n;
        int a[m];
        for(j=0;j<m;j++)
        {
            cin>>a[j];
        }
        sort(a,a+m);
        q=0;
        p=0;
        for(j=m-2;j>=0;j--)
        {
            p++;
            if(p<=n)
            {
                q+=a[j];
            }
            else{
                break;
            }
        }
        cout<<a[m-1]+q<<endl;
    }


}
