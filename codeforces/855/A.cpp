#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n,i,j;
    cin>>n;
    char a[n][101];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        int p=0;
        if(i!=0)
        {
            for(j=i-1;j>=0;j--)
            {
                if(strcmp(a[i],a[j])==0)
                {
                    p++;
                    cout<<"YES"<<endl;
                    break;
                }
            }
        }
        if(p==0)
        {
            cout<<"NO"<<endl;
        }
    }


    return 0;
}
