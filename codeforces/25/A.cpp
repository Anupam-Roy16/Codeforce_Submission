#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[100],p,q,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if((a[i]%2)==0)
        {
            c++;
            p=i;
        }
        else{
            q=i;
        }
    }
    if(c==1)
    {
        cout<<p+1<<endl;
    }
    else{
        cout<<q+1<<endl;
    }

    return 0;
}
