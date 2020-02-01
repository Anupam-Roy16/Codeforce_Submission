#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,c,p=0,q=0,r=0;
    cin>>a>>b>>c;
    for(i=1;;i++)
    {
        a=a-i;
        if(a==0)
        {
            p++;
            break;
        }
        a=a+i;
        b=b-(i+1);
        if(b==0)
        {
            q++;
            break;
        }
        b=b+(i+1);
        c=c-(i+2);
        if(c==0)
        {
            r++;
            break;
        }
        c=c+(i+2);
    }
    cout<<i+i+1+i+2<<endl;
    return 0;
}
