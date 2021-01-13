#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p,q=0,n,i,t,j,r=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if((n==1)&&(a[0]==0))
    {
        cout<<"0"<<endl;
            return 0;
    }
    for(i=0;i<n-1;)
    {
        if(a[i]==0)
        {
            p=0;
           // cout<<i<<endl;
            for(j=i;j<n;j++)
            {
                if(a[j]==0)
                {
                    p++;
                }
                else{
                    break;
                }
            }
            i=(j+1);

            if(p>=2)
            {
                q+=p;
            }
        }
        else{
            i++;
        }

    }

    if(a[0]==0)
    {
        if(a[1]!=0)
        {
            q++;
        }
    }
    if(a[n-1]==0)
    {
        if(a[n-2]!=0)
        {
            q++;
        }
    }


    cout<<n-q<<endl;

}
