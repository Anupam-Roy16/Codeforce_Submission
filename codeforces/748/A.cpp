#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,n,p,q,r,i;
    cin>>n>>p>>q;
    p*=2;
    r=q/p;
    if(q%p==0)
    {
        cout<<q/p<<" ";
    }
    else{
        cout<<(q/p)+1<<" ";
    }
    int t=p;
    int s=q;
    for(i=p;;i+=p)
    {
        if(q<=i)
        {
            break;
        }
    }
    i-=(t-1);
    q-=i;
    q/=2;
    cout<<q+1<<" ";
    if(s%2==0)
    {
        cout<<"R"<<endl;
    }
    else{
        cout<<"L"<<endl;
    }

    return 0;

}
