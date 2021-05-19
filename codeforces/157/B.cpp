#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p=0;
    double f=0,r=3.1415926;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=n-1;i>=0;i--)
    {
        if(i!=0)
        {
            if(p==0)
            {
                f+=(r*((a[i]*a[i])-(a[i-1]*a[i-1])));
            p++;
            }
            else{
                p--;
            }
        }
        else{
            if(p==0)
            {
                f+=(r*((a[0]*a[0])));
            }

        }
    }
    cout<<f<<endl;
}
