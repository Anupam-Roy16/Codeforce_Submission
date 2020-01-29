#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x,a,b,m;
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>n>>x>>a>>b;
        if(x==0)
        {
            if(a>b)
            {
                cout<<a-b<<endl;
            }
            else{
                cout<<b-a<<endl;
            }
        }
        else if((a==n)&&(b==1))
        {
            cout<<n-1<<endl;
        }
        else if((a==1)&&(b==n))
        {
            cout<<n-1<<endl;
        }
        else{
            if(a>b)
            {
                if(((a-b)+x)<(n-1))
                {
                    cout<<(a-b)+x<<endl;
                }
                else{
                    cout<<n-1<<endl;
                }
            }
            else{
                if(((b-a)+x)<(n-1))
                {
                    cout<<(b-a)+x<<endl;
                }
                else{
                    cout<<n-1<<endl;
                }

            }
        }
    }


    return 0;
}
