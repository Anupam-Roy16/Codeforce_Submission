#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p,q,n,i,j,m;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=n-1;i>=0;i--)
    {
        if((a[n-1]%a[i]==0)&&(a[i]==a[i-1]))
        {
            break;
        }
        else if(a[n-1]%a[i]!=0){
            break;
        }

    }
    cout<<a[n-1]<<" "<<a[i]<<endl;

}
