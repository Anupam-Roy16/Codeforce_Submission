#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,u,j=0,p,t=0,k,f;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            j++;
        }
    }
    if(j==0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    n-=j;

    for(i=n;i>0;i--)
    {
        k=5*i;
        if(k%9==0)
        {
            break;
        }
    }
  int y=j,r=0;
    for(j=0;j<i;j++)
    {
        r++;
        cout<<"5";
    }
if(r==0)
{
    cout<<"0"<<endl;
    return 0;
}
    for(j=0;j<y;j++)
    {
        cout<<"0";

    }
cout<<endl;

}
