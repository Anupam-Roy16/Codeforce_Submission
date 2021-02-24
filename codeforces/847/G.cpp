#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,t=-1,i,j;
    cin>>n;
    char a[n][7];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<7;i++)
    {
        p=0;
        for(j=0;j<n;j++)
        {
            if(a[j][i]=='1')
            {
                p++;
            }
        }
        if(p>t)
        {
            t=p;
        }
    }
    cout<<t<<endl;



}




