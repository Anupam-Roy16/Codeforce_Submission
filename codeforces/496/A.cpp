#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n;
    int a[n],b[n-2];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int q=222222;
    for(i=1;i<n-1;i++)
    {
        int p=0;
        for(j=1;j<n;j++)
        {
            if(j==(i+1))
            {
                b[p]=a[j]-a[i-1];
                p++;
            }
            else if(j==i)
            {

            }
            else{
                b[p]=a[j]-a[j-1];
                p++;
            }
        }
        sort(b,b+p);
        if(q>b[p-1])
        {
            q=b[p-1];
        }
    }
    cout<<q<<endl;
    return 0;
}
