#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,a,p,i,j,n,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<<"0"<<endl;
        }
        else
        {
            p=abs(a-b);
            if(p<10)
            {
                cout<<"1"<<endl;
            }
            else{
if((p%10)==0)
{
cout<<p/10<<endl;
}
else{
                cout<<(p/10)+1<<endl;
}
            }
        }
    }
    return 0;
}