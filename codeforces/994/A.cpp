#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m;
    cin>>n>>m;
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=0;j<m;j++)
    {
        cin>>b[j];
    }
    int p=0;
    int c[n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
              c[p]=a[i];
              p++;
            }
        }
    }
    for(i=0;i<p;i++)
    {
        cout<<c[i];
        if(i!=(p-1))
        {
            cout<<" ";
        }
        else{
            cout<<endl;
        }
    }
    return 0;

}
