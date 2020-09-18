#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i,l,m,p=0,w;
    cin>>n;
    int a[6];
    for(i=0;i<n;i++)
    {
        cin>>m;
        if(m<10)
        {
            cout<<"1"<<endl<<m<<endl;
        }
        else{
            for(int j=0;;j++)
            {
                l=m%10;
                //cout<<l<<" "<<j<<endl;
                if(l!=0)
                {
                    if(j==0)
                    {
                        w=1;
                    }
                    else if(j==1)
                    {
                        w=10;
                    }
                    else if(j==2)
                    {
                        w=100;
                    }
                    else if(j==3)
                    {
                        w=1000;
                    }
                    else if(j==4)
                    {
                        w=10000;
                    }
                   // cout<<l<<" "<<w<<endl;
                    int q=l*w;

                    a[p]=q;
                    p++;
                }
                 m/=10;
                 if(m==0)
                 {
                     break;
                 }
            }
            cout<<p<<endl;
            for(int j=0;j<p;j++)
            {
                cout<<a[j];
                if(j!=(p-1))
                {
                    cout<<" ";
                }
                else{
                    cout<<endl;
                }
            }
            p=0;
        }
    }

    return 0;
}
