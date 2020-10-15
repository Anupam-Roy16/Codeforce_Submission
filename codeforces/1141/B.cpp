#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,k,p=0,t=-1;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;)
    {

         //cout<<i<<endl;
        if(a[i]==1)
        {
            p=1;
            k=i+1;
            while(k<n)
            {
                if(a[k]==1)
                {

                   p++;
                   k++;

                   i=k;
                }
                else{
                       // cout<<p<<endl;
                    if(p>t)
                    {
                        t=p;
                    }

                    i=k;
                    break;
                }

            }
            i++;

        }
        else{
            i++;
        }
    }

    int w=0;
    int q;

    if((a[0]==1)&&(a[n-1]==1))
    {
        i=0;
        while(i<n)
        {
           if(a[i]==1)
           {
               w++;
               i++;
           }
           else{
            break;
           }
        }
        i=n-1;
        q=0;
        while(i>=0)
        {
            if(a[i]==1)
            {
                q++;
                i--;
            }
            else{
                break;
            }
        }
        q+=w;
        if(t>q)
        {
            cout<<t<<endl;
        }
        else{
            cout<<q<<endl;
        }
        return 0;
    }
    if(t==-1)
    {
            cout<<p<<endl;

    }
    else{
        cout<<t<<endl;
    }

    return 0;
}
