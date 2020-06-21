#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c,d;
    cin>>n;
    int b[n],a[n];
    cin>>c;
    for(i=0;i<n;i++)
    {
        if(i<c)
        {
            cin>>a[i];
        }
        else{
            a[i]=0;
        }
    }
    cin>>d;
    for(i=0;i<n;i++)
    {
        if(i<d)
        {
            cin>>b[i];
        }
        else{
            b[i]=0;
        }
    }
    int t=0,f=0;
    while(1)
    {
        int i=0;
//cout<<"q";
        if(a[i]>b[i])
        {
            t++;
            int p=a[i],q=b[i];
            for(i=0;i<n-1;i++)
            {
                b[i]=b[i+1];
            }
            b[n-1]=0;
            for(i=0;;i++)
            {
                a[i]=a[i+1];
                if(a[i]==0)
                {
                    break;
                }
            }
            a[i]=q;
            a[i+1]=p;
        }
        else if(b[i]>a[i]){
                int p=a[i],q=b[i];
            t++;
            int r=a[i],t=b[i];
            for(i=0;i<n-1;i++)
            {
                a[i]=a[i+1];
            }
            a[n-1]=0;
            for(i=0;;i++)
            {
                b[i]=b[i+1];
                if(b[i]==0)
                {
                    break;
                }
            }
            b[i]=r;
            b[i+1]=t;
        }
        if(t>10000)
        {
            cout<<"-1"<<endl;
            break;
        }
        else if(a[0]==0)
        {
            cout<<t<<" 2"<<endl;
            break;
        }
        else if(b[0]==0)
        {
            cout<<t<<" 1"<<endl;
            break;
        }
        }

    }
