#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,m,j,r=-1,w=0,p=-1,q=0;
    cin>>t;
    int a[t];
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    sort(a,a+t);
    for(i=1;i<t;i++)
    {
        if(a[0]<a[i])
        {
            p=a[i];
            break;
        }
    }
    if(p==-1)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<p<<endl;
    }

}
