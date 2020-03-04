#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0,sum1=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        sum1+=b[i];
    }
    if(sum1<=sum)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
