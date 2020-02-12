#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4],b,c,d,e;
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a,a+4);
    b=a[0],c=a[1],d=a[2],e=a[3];
    int l=e-c;
    cout<<l<<" "<<b-l<<" "<<d-l<<endl;
    return 0;
}
