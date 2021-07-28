#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    while(n--)
    {
        int p,q,y;
        cin>>y;
        p=y%100;
        y/=100;
        q=p%10;
        p/=10;
        if(q==9)
        {
            cout<<(10*y)+p+1<<endl;
        }
        else{
                cout<<(10*y)+p<<endl;
        }
    }
    return 0;
}
