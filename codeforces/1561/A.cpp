#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,j,c ,r,s,t,p,q;
    cin>>t;
    while(t--)
    {
        cin>>p;
        int a[p];
        for(i=0;i<p;i++)
        {
            cin>>a[i];
        }
         int z=0;
            for(int w=0;w<p-1;w++)
            {
                if(a[w]>a[w+1])
                {
                    z++;
                    break;
                }
            }
            if(z==0)
            {
                cout<<"0"<<endl;
                continue;
            }
        for(i=1;;i++)
        {

            if(i%2!=0)
            {
                for(j=0;j<p-2;j+=2)
                {
                    if(a[j]>a[j+1])
                    {
                        int p=a[j];
                        a[j]=a[j+1];
                        a[j+1]=p;
                    }
                }
            }
            else{
                for(j=1;j<p-1;j+=2)
                {
                    if(a[j]>a[j+1])
                    {
                        int p=a[j];
                        a[j]=a[j+1];
                        a[j+1]=p;
                    }
                }
            }
            int z=0;
            for(int w=0;w<p-1;w++)
            {
                if(a[w]>a[w+1])
                {
                    z++;
                    break;
                }
            }
            if(z==0)
            {
                cout<<i<<endl;
                break;
            }

        }
    }
    return 0;
}
