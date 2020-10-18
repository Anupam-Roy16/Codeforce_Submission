#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  b=0,c,m,d=0,p,t=-1000000001;
    int j;
    cin>>p;
    int a[p];
    for(j=0;j<p;j++)
    {
        cin>>a[j];
    }
    for(j=0;j<p;j++)
    {

        cout<<d+a[j];
        m=d+a[j];
        if(m>d)
        {
            d=m;
        }
        if(j!=(p-1))
        {
            cout<<" ";
        }
        else{
            cout<<endl;
        }

    }



    return 0;
}
