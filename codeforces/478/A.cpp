#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    l=(a+b+c+d+e);
    if((l!=0)&&(l%5)==0)
    {
        cout<<l/5<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}
