#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,i,b,c,d;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c>>d;
        a/=b;
        if((c%b)==0)
        {
            c/=b;
            c--;
        }
        else{
            c/=b;
        }
        d/=b;
        cout<<a-(d-c)<<endl;
    }
    return 0;
}
