#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0,i,n,m;
    cin>>n>>m;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum<0)
    {
        sum*=-1;
    }
    int l=sum/m;
    if((sum%m)==0)
    {
        cout<<l<<endl;
    }
    else{
        cout<<l+1<<endl;
    }

    return 0;
}
