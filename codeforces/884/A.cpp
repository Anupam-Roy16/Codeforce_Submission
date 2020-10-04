#include<bits/stdc++.h>
using namespace std;

int main()
{

    int q,t,i,c,j=-1,p=0;
    cin>>t>>q;
    int a[t];
    for(i=0;i<t;i++)
    {
        cin>>a[i];
        c=86400-a[i];
        p+=c;
        if((p>=q)&&(j==-1))
        {
            j=i;
        }
    }
    cout<<j+1<<endl;
    return 0;
}
