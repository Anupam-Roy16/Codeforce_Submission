#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,p=0,q=0,r=0;
    cin>>a>>b;
    for(int i=1;i<=6;i++)
    {
        if((abs(a-i))<(abs(b-i)))
        {
            p++;
        }
        if(abs(a-i)==abs(b-i))
        {
            q++;
        }
        if(abs(a-i)>abs(b-i))
        {
            r++;
        }
    }
    cout<<p<<" "<<q<<" "<<r<<endl;
    return 0;
}
