#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,q=0,p;
    cin>>p;
    int a[12];
    for(j=0;j<12;j++)
    {
        cin>>a[j];
    }
    sort(a,a+12);
    if(p==0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    int t=0;
    for(j=11;j>=0;j--)
    {
        t++;

        q+=a[j];
        if(q>=p)
        {
            cout<<t<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;





    return 0;
}
