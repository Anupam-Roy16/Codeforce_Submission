#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,d,p,q=0,t=0,j,b[101];
    cin>>n>>d;
    char a[n+1];
    for(i=0;i<d;i++)
    {

        cin>>a;
        //
        p=0;
        for(j=0;j<n;j++)
        {
            if(a[j]=='0')
            {
                p++;
                break;
            }
        }
        if(p==1)
        {
            q++;
        }
        else{

            b[t]=q;
            q=0;
            t++;
        }
    }
    if(q!=0)
    {
        b[t]=q;
         sort(b,b+t+1);
    cout<<b[t]<<endl;

    }
    else{
    sort(b,b+t);
    cout<<b[t-1]<<endl;
    }
    return 0;
}
