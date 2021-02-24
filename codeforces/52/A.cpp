#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0,q=0,t=-1,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            p++;
        }
        else if(a[i]==2){
            q++;
        }
    }

    j=n-p-q;
    t=max(p,q);
    t=max(t,j);
    cout<<n-t<<endl;



}




