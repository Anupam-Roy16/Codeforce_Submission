#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,r,s,a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a,a+4);
    p=a[0]+a[1];
    q=a[0]+a[2];
    r=a[1]+a[2];
    s=a[0]+a[1];
if((p>a[2])||(q>a[3])||(r>a[3])||(s>a[3]))
    {
        cout<<"TRIANGLE"<<endl;

    }

   else{
    if((p<a[2])&&(q<a[3])&&(r<a[3])&&(s<a[3]))
   {
       cout<<"IMPOSSIBLE"<<endl;
   }
    else{
        cout<<"SEGMENT"<<endl;
    }
   }
}
