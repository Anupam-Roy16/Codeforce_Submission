#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,p,t;
    cin>>n;
    int a[n],b[n]={0};
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    t=1;
    for(i=0;i<n;i++)
    {
        t=i+1;
        while(1)
        {
            if(b[t-1]==0)
        {
            p=a[t-1];
            b[t-1]++;
            t=p;
        }
        else{
            cout<<t;
            if(i!=n-1)
            {cout<<" ";
            }
            else{
                    cout<<endl;
            }
           // b[n]={0};
            for(j=0;j<n;j++)
    {
        b[j]=0;;
    }
    //cout<<endl;
            break;
        }
        }
    }
}
