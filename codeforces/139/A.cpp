#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p=0,n,i;
    cin>>n;
    int a[7];
    for(i=0;i<7;i++)
    {
        cin>>a[i];
    }
    for(i=0;;i++)
    {
        p+=a[i];

        if(p>=n)
        {
            break;
        }
        if(i==6)
        {
            i=-1;
        }
    }
    cout<<i+1<<endl;


    return 0;
}
