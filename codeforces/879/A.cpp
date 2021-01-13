#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,n,i,t,j,r;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p>>q;
        if(i==0)
        {
            t=p;
        }
        else{
                if(t>=p){
            for(j=t+1;;j++)
            {
                r=j;
                r-=p;
                if(r%q==0)
                {
                    t=j;
                    break;
                }
            }
                }
                else{
                    t=p;
                }
        }
    }
    cout<<t<<endl;

}
