#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ul;
int main()
{
    int p,n,j;
    double x,y,z;
    cin>>n;
    while(n--)
    {
        ul w,u=0,v=0;
        cin>>p>>x;
        while(p--)
        {
            cin>>y;
            z=ceil(y/x);
            v+=(ul)z;
            u+=(ul)y;
        }
        w=(ul)x;
        if(u%w==0)
        {
            cout<<u/w;
        }
        else{
            cout<<(u/w)+1;
        }
        cout<<" "<<v<<endl;

    }
}
