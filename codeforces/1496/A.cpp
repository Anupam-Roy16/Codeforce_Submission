#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  i,j,t,n,m,p,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p>>k;
        char a[p+1];
        cin>>a;
        t=(2*k)+1;
        if(p>=t)
        {

            int r=0;
            for(j=0;j<k;j++)
            {
                if(a[j]!=a[p-1-j])
                {
                    r++;
                }
            }
           // cout<<r<<endl;
            if(r==0)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }


}
