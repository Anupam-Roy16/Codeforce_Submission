#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,p=0,m;
    cin>>n>>m;
    char a[n][m];
    char q;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(j==0)
            {
                q=a[i][j];
            }
            else{
                if(q!=a[i][j])
                {
                    p++;
                }
                else{
                    q=a[i][j];
                }
            }
        }
    }
    if(p!=0)
    {
        cout<<"NO"<<endl;
    }
    else{
        for(i=0;i<n-1;i++)
        {
            if(a[i][0]==a[i+1][0])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
    }



}
