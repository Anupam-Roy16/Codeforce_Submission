#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,k,p,w=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(j=0;j<m;j++)
    {
        cin>>b[j];
    }
    for(i=0;i<n;i++)
    {
        int q=0;
        for(j=0;j<m;j++)
        {
            q=0;

            int l=a[i]+b[j];

            for(k=0;k<n;k++)
            {
                if(l==a[k])
                {
                    q++;
                    break;
                }
            }if(q==0){
            for(p=0;p<m;p++)
            {

                if(l==b[p])
                {
                    q++;
                    break;
                }
            }
            }
          if(q==0)
            {
               
                w++;
                break;
            }
        }
        if(w==1)
        {
            break;
        }

    }

    if((i==n)&&(j==m))
    {cout<<a[i-1]<<" "<<b[j-1]<<endl;}
    else{
        cout<<a[i]<<" "<<b[j]<<endl;
    }
    return 0;
}
