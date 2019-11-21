#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d\n",&n);
    int a[101];
    int b[101];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int p=0;
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
        if((i+1)==a[j])
        {
            b[p]=j+1;
            p++;
            break;
        }
    }
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i];
        if(i!=(n-1))
        {
            cout<<" ";
        }

    }

    return 0;
}
