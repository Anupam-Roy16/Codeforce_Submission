#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i,l,m,q=0,w;
    cin>>n;
    int a[5]={100,20,10,5,1};
    for(i=0;;i++)
    {
        int p=n%a[i];
        if(p==0)
        {
            q+=n/a[i];
            break;
        }
        else{
            q+=(n/a[i]);
        }
        n=p;
    }
    cout<<q<<endl;
    return 0;
}
