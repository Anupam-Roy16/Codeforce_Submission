#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int a[3],m;
        cin>>a[0]>>a[1]>>a[2]>>m;
        sort(a,a+3);
        int l=((a[2]-a[0])+(a[2]-a[1]));
        if(l>m)
        {
            cout<<"NO"<<endl;
        }
        else if(l==m)
        {
             cout<<"YES"<<endl;
        }
        else{
                 l=m-l;
        if((l%3)==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
    }

    return 0;
}
