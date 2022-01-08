#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    while(n--)
    {
        int y,z=0,i,p,q,x=0;
        cin>>p;
        vector<int>v;
        for(i=0;i<p;i++)
        {
            cin>>q;
            v.push_back(q);
            if(q%2==0)
            {
                z++;
            }
            if((i%2==0)&&(q%2!=0))
            {
                x++;
            }
            else if((i%2!=0)&&(q%2==0))
            {
                x++;
            }
        }
        y=p-z;
        if(x%2!=0)
        {
            cout<<"-1"<<endl;
        }
        else{
            if(p%2==0)
            {
                if(y!=z)
                {
                    cout<<"-1"<<endl;
                }
                else{
                    cout<<x/2<<endl;
                }
            }
            else{
                if((z-1)!=y)
                {
                    cout<<"-1"<<endl;
                }
                else{
                    cout<<x/2<<endl;
                }
            }
        }

    }
}
