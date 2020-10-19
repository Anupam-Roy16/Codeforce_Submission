#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,t=-1,m;
    cin>>n;
    int a[n];
    for(j=0;j<n;j++)
    {
        cin>>a[j];
        if(t<a[j])
        {
            t=a[j];
            m=j;
        }
    }
    sort(a,a+n);
    cout<<m+1<<" "<<a[n-2]<<endl;



    return 0;
}
