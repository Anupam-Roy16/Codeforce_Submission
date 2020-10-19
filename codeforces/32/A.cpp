#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p,i,j,q=0;
    cin>>n>>m;
    int a[n];
    for(j=0;j<n;j++)
    {
       cin>>a[j];
    }
    sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            p=abs(a[i]-a[j]);
            if(p<=m)
            {
                q+=2;
            }
            else{
                break;
            }
        }
    }
    cout<<q<<endl;





    return 0;
}
