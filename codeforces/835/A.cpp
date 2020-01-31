#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int l=(a*b)+(2*d);
    int m=(a*c)+(2*e);
    if(l==m)
    {
        cout<<"Friendship"<<endl;
    }
    else if(l>m)
    {
        cout<<"Second"<<endl;
    }
    else{
        cout<<"First"<<endl;
    }
    return 0;
}
