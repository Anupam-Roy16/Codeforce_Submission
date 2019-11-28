#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b;
    cin>>a;
    cin>>b;
    for( i=0;;i++)
    {
        a=a*3;
        b=b*2;
        if(a>b)
        {
            break;
        }
    }
    cout<<i+1<<"\n";
    return 0;
}
