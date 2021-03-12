#include<bits/stdc++.h>
using namespace std;
int main()
{

    int  i,j,t=0,n,m=0,p,k;
    cin>>n;
    vector<int>a;
    for(i=0;i<n;i++)
    {
        cin>>m;
        a.push_back(m);
    }

    for(i=1;i<n;i++)
    {
        if(a[i]==0)
        {
            if(((i-1)>=0)&&((i+1)<n)&&(a[i-1]==1)&&((a[i+1]==1)))
               {
                   a[i+1]=0;
                   t++;
               }
        }
    }
    cout<<t<<endl;
}
