#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long  n,l;
    cin>>n;
    unsigned long long a[n][n];
    int i,j,p,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
        {
            if(a[i][j]!=1)
            {
                int q=0;
                for(p=0;p<n;p++)
                {
                    for(k=0;k<n;k++)
                    {
                        if((k!=i)&&(p!=j))
                        {
                        int t=a[k][j]+a[i][p];
                        if(t==a[i][j])
                        {
                            q++;
                        }
                        }
                    }
                }
                if(q==0)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
