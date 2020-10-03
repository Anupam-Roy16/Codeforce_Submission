#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i,p=0,q=0,a;
    cin>>a;
    int b[a];
    for(i=0;i<a;i++)
    {
        cin>>b[i];
        if(b[i]>0)
        {
            p++;
        }
        else if(b[i]<0)
        {
            q++;
        }
    }
    if(a%2==0)
    {
        a/=2;
    }
    else{
        a/=2;
        a++;
    }
    if(p>=a)
    {
        cout<<"4"<<endl;
    }
    else if(q>=a)
    {
        cout<<"-4"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    return 0;
}
