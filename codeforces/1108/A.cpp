#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,q,n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c>>d;
        cout<<a;
        while(c<=d)
        {
            if(c!=a)
            {
                cout<<" "<<c<<endl;
                break;
            }
            else{
                c++;
            }
        }
    }
}
