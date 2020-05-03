#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,p;
    cin>>n>>k;
    p=65+(k-1);
    int b[k];
    for(i=0;i<=k;i++)
    {
        b[i]=0;
    }
    char a[n+1];
    cin>>a;
    for(i=0;i<n;i++)
    {
        for(j=65;j<=p;j++)
        {
            if((int)a[i]==j)
            {
                int q=j-65;
                b[q]++;
                break;
            }
        }
    }
    sort(b,b+k);
    cout<<b[0]*k<<endl;
    return 0;
}
