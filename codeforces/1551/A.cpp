#include<bits/stdc++.h>
using  namespace  std;
int main()
{
    int n,p,q,r,s;
    cin>>n;
    while(n--)
    {
        cin>>p;
        r=p;
        p/=3;
        if(((p*2)+p)==r)
        {
            cout<<p<<" "<<p<<endl;
        }
        else if((((p+1)*2)+p)==r)
        {
            cout<<p<<" "<<p+1<<endl;
        }
        else{
            cout<<p+1<<" "<<p<<endl;
        }
    }
}
