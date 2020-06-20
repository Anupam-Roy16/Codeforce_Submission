#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,j,n,m,i;
    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    int c[m][2];
    for(j=0;j<m;j++)
    {
        cin>>c[j][0]>>c[j][1];
    }

    for(j=0;j<m;j++)
    {
        int k=a[c[j][0]-1];
        a[c[j][0]-1]=0;
        if((c[j][0]-2)>=0)
        {
            a[c[j][0]-2]+=(c[j][1]-1);
        }
        if((c[j][0])<=(n-1))
        {
            a[c[j][0]]+=(k-c[j][1]);
        }


    }

for(j=0;j<n;j++)
{
    cout<<a[j]<<endl;
}



}
