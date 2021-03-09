#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  i,j,t,n,m,p,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        int a[m];
        t=0;
        for(j=0;j<m;j++)
        {
            cin>>a[j];
        }
        sort(a,a+m);
        for(j=0;j<m-1;j++)
        {
            if(a[j]==a[j+1])
            {
                t++;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(t==0)
        {
            cout<<"NO"<<endl;
        }
    }


}
