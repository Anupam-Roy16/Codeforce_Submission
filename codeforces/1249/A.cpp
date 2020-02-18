#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int m,j,p=0;
        cin>>m;
        int a[m];
        for(j=0;j<m;j++)
        {
            cin>>a[j];

        }
        sort(a,a+m);
        for(j=0;j<m-1;j++)
        {
        if(abs(a[j]-a[j+1])==1)
            {
               p++;
               cout<<"2"<<endl;
               break;
            }
        }
        if(p==0)
        {
            cout<<"1"<<endl;
        }

    }
    return 0;
}

