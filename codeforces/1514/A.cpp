#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,i,j,k;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        float p,q,r=0,a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            p=sqrt(a[j]);
            q=ceil(p);
            if(p!=q)
            {
                r++;
            }
        }
        if(r!=0)
        {
             cout<<"YES"<<endl;
        }
        else{

            cout<<"NO"<<endl;
        }
    }
}

