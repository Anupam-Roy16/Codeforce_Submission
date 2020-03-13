#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j;
    cin>>n>>k;
    int a[n];
    int c[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        c[i]=a[i];
    }

    int b[n];
    sort(a,a+n);
     int p=a[0];
    b[0]=a[0];
    int q=1;
    for(i=1;i<n;i++)
    {
        if(p!=a[i])
        {
            b[q]=a[i];
            q++;
        }
        p=a[i];
    }

    if(q>=k)
    {
        cout<<"YES"<<endl;
        for(i=0;i<k;i++)
        {
            for(j=0;j<n;j++)
            {
                if(b[i]==c[j])
                {
                    cout<<j+1;
                    if(i!=(k-1))
                    {
                        cout<<" ";
                    }
                    else{cout<<endl;}
                break;
                }
            }

        }
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
