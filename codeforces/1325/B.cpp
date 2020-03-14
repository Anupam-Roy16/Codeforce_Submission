#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int m;
        cin>>m;
        int a[m];
        for(int j=0;j<m;j++)
        {
            cin>>a[j];
        }
        sort(a,a+m);
        int p=0;

        for(int j=1;j<m;j++)
        {
            if(a[j]==a[j-1])
            {
                p++;
            }
        }
        cout<<m-p<<endl;
    }
    return 0;
}
