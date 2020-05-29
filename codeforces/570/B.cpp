#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,m;
    cin>>n>>m;
    a=m-1;
    b=n-m;

    if(a>b)
    {
        cout<<m-1<<endl;
    }
    else{
            if((a==0)&&(b==0))
            {
                cout<<"1"<<endl;
            }
            else if(a==b)
            {
                cout<<m-1<<endl;
            }
        else{cout<<m+1<<endl;}
    }


}
