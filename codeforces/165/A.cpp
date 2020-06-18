#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n][2];
    for(i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
    }
    int w=0;
    for(i=0;i<n;i++)
    {
        int p=0,q=0,r=0,s=0;
        for(int j=0;j<n;j++)
        {
            if((a[i][0]>a[j][0])&&(a[i][1]==a[j][1]))
            {
                p++;
            }
            if((a[i][0]<a[j][0])&&(a[i][1]==a[j][1]))
            {
                q++;
            }
            if((a[i][1]>a[j][1])&&(a[i][0]==a[j][0]))
            {
                r++;
            }
            if((a[i][1]<a[j][1])&&(a[i][0]==a[j][0]))
            {
                s++;
            }
        }
        if((p!=0)&&(q!=0)&&(r!=0)&&(s!=0))
        {
          w++;
        }
    }
    cout<<w<<endl;


    return 0;
}
