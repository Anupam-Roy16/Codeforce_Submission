#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        char a[m+1];
        cin>>a;
        int q=0;
        for(j=0,k=m-1;j<=((m/2)-1),k>=(m/2);j++,k--)
        {
            if(a[j]!=a[k])
            {
                int l=(int)a[j];
                int p=(int)a[k];
                if((abs(l-p)!=2))
                {
                    q++;
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
        if(q==0)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
