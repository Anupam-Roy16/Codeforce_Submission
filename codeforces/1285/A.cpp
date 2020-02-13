#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,p=0,q=0;
    cin>>n;
    char a[n];
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='L')
        {
            p++;
        }
        else{
            q++;
        }
    }
    cout<<(p+q+1)<<endl;
    return 0;
}
