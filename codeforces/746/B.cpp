#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,l;
    cin>>n;
    char a[n],b[n];
    cin>>a;
    int m=n/2;
    if((n%2)!=0)
    {
        b[m]=a[0];
        for(i=1;i<n;i++)
        {
                if((i%2)==0)
                    {m+=i;}
                else
                {
                    m-=i;
                }
                b[m]=a[i];
        }
        for(i=0;i<n;i++)
        {
           cout<<b[i];
        }
        cout<<endl;
    }
    else
    {
        m=m-1;
        b[m]=a[0];
        for(i=1;i<n;i++)
        {
            if((i%2)==0)
            {
                m-=i;
            }
            else{
                m+=i;
            }
            b[m]=a[i];
        }
        for(i=0;i<n;i++)
        {
            cout<<b[i];
        }
        cout<<endl;
    }
return 0;
}
