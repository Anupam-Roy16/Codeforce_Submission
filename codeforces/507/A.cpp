#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0,i,k,p=0,q=0,r=0;
    cin>>n>>k;
    int a[n],b[n],c[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;)
    {
        int q=0;
        for(int j=0;j<n;j++)
            {
                if(a[i]==b[j])
                {
                     m+=a[i];
                     if(m<=k)
                     {

                     c[p]=j;
                     p++;
                     q++;
                     }
                     else
                        {
                            r++;
                         break;
                    }
                }
             }
             i+=q;
             if(r!=0)
             {
                 break;
             }
    }
    cout<<p<<endl;
    for(i=0;i<p;i++)
    {
        cout<<c[i]+1;
        if(i!=(p-1))
        {
            cout<<" ";
        }
        else{
            cout<<endl;
        }
    }
    return 0;
}
