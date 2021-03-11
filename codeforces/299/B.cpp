#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  i,j,t,n,m,p,k;
    cin>>n>>m;
    char a[n+1];
    cin>>a;
    for(i=0;i<n;)
    {
       t=i;
       t+=m;
       if(t>=(n-1))
       {
           cout<<"YES"<<endl;
           return 0;
       }
       k=0;
       for(j=t;j>i;j--)
       {
           if(a[j]=='.')
           {
               i=j;
               k++;
               break;
           }
       }
       if(k==0)
       {
           break;
       }
    }
    cout<<"NO"<<endl;


}
