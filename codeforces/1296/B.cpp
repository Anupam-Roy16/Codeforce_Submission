#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,p,q,a,b,c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p;
        c=0;
        for(j=0;;j++)
        {
            if(p<10)
            {
                c+=p;
                break;
            }
            q=p%10;
            a=p-q;
            c+=a;
            a/=10;
            a+=q;
            p=a;
        }
        cout<<c<<endl;
    }


}
