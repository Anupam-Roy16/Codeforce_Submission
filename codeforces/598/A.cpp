#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,l,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int j;
        for( j=0;j<=29;j++)
        {
            l=pow(2,j);
            if(l>=n){
                break;
            }

        }
        int p=0,k;
        if(l==n)
        {
            for( k=0;k<=j;k++)
            {
                p+=pow(2,k);
            }

        }
        else{
            for(k=0;k<j;k++)
            {
                p+=pow(2,k);
            }

        }
       // cout<<p<<endl;
        long long m=(n*(n+1))/2;
        cout<<m-p-p<<endl;
    }
    return 0;
}
