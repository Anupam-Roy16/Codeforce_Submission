#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[2*n];
    int b[n];
    int p=0;
    for(int i=0;i<(2*n);i++)
    {
        cin>>a[i];
        if((i%2)==1)
        {
          if(a[i]>k)
          {
              b[p]=a[i-1]-a[i]+k;
              p++;
          }
          else{
            b[p]=a[i-1];
            p++;
          }
        }
    }
    sort(b,b+p);
    cout<<b[p-1]<<endl;

    return 0;
}
