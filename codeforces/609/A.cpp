#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,p=0,q=0;
    cin>>n>>a;
    int b[n];
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    sort(b,b+n);

    for(i=n-1;i>=0;i--)
    {
        p+=b[i];
        q++;
        if(p>=a)
        {
            break;
        }
    }
    cout<<q<<endl;
    return 0;
}
