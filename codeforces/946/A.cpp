#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]!=0)
        {
            if(a[i]<0)
            {
                p+=(a[i]*-1);
            }
            else{
                p+=a[i];
            }
        }
    }
    cout<<p<<endl;
    return 0;

}
