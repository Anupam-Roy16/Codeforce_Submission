#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,p,m;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m>>p;
        int a[m],q=0;
        for(j=0;j<m;j++)
        {
            cin>>a[j];
            q+=a[j];
        }
        if(q==p)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


}
