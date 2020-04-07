#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,k,n,i,a,b;
    cin>>n;
     m=n%7;
     k=n/7;
    if(m==0)
    {
        cout<<2*k<<" "<<2*k<<endl;
    }
    else{
            if(m==1)
            {
                a=0;
                b=1;
            }
            else if(m==6)
            {
                a=1;
                b=2;
            }
            else{
                a=0;
                b=2;
            }
        cout<<(2*k)+a<<" "<<(2*k)+b<<endl;
    }
    return 0;
}
