#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k,i,j;
    cin>>n;
    for(k=0;k<n;k++)
    {

    cin>>t;
    int a[3][t];
    for(i=0;i<3;i++)
    {
        for(j=0;j<t;j++)
        {
            cin>>a[i][j];
        }
    }
    int p=a[0][0],r=1,q=a[0][0],b[t];
    b[0]=a[0][0];

    for(i=1;i<t;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==(t-1))
            {
                if((q!=a[j][i])&&(a[j][i]!=b[0]))
                {
                     b[r]=a[j][i];
                     r++;
                     //cout<<q<<" "<<b[0]<<"y";
                     break;
                }

            }
            else if(q!=a[j][i])
            {
                b[r]=a[j][i];
                r++;
                q=a[j][i];
               // cout<<"x";
                break;
            }
            else{
                //cout<<"w";
            }
        }
    }
    for(i=0;i<r;i++)
    {
        cout<<b[i];
        if(i!=(r-1))
        {
            cout<<" ";
        }
        else{
            cout<<endl;
        }
    }
    }
    return 0;
}
