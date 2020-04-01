#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,j,t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
       cin>>n>>d;
       int a[n];
       for(j=0;j<n;j++)
       {
           cin>>a[j];
       }
       int w=0;
       for(j=1;((j<n)&&(w==0));j++)
       {
           if((a[j]*j)<=d)
           {
               a[0]+=a[j];
               d-=(a[j]*j);
           }
           else{
                w++;
            for(int k=1;k<=a[j];k++)
            {
                if((k*j)<=d)
                {
                    a[0]++;

                }
                else{
                    break;
                }
            }
           }
       }
       cout<<a[0]<<endl;

    }
    return 0;
}
