#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,i,j,t,n,p=0;
    cin>>t;
    int a[t];
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(i=t-1;i>=0;i--)
    {
        if(a[i]==0)
        {
            continue;
        }
        p++;
        n=i;
        n--;
        while(n>=0)
        {
            if(a[i]==a[n])
            {
                a[n]=0;
                n--;
            }
            else{
                n--;
            }
        }

    }
    cout<<p<<endl;
    int s=0;
    for(i=0;i<t;i++)
    {
        if((a[i]!=0)&&(s==0))
        {
            cout<<a[i];
          s++;
          continue;
        }
        if(a[i]!=0)
        {
            cout<<" "<<a[i];
        }

    }
    cout<<endl;

}
