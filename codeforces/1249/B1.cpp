#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,j,k;
        cin>>n;
        int a[n];
        for(j=1;j<=n;j++)
        {
            cin>>a[j];
        }
        for(k=1;k<=n;k++)
        {
            int p=0;
            for(j=k;;)
            {

                if(a[j]!=k){
                p++;
                }
                else{

                        cout<<p+1;
                    break;
                }
                j=a[j];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
