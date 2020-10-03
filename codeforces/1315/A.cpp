#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,c,d,r=-1,w=0,p=-1,q=0;
    int t;
    cin>>t;
    for(i=0;i<t;i++)
    {


    cin>>a>>b>>c>>d;
    p=b-(d+1);
    q=a-(c+1);
    int m=p*a;
    r=q*b;
    int n=c*b;
    int s=d*a;
    int b[4];
    b[0]=m;
    b[1]=r;
    b[2]=n;
    b[3]=s;
    sort(b,b+4);
    cout<<b[3]<<endl;
    }

}
