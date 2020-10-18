#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  b=0,c,m,d=0,p,t=0;
    int j;
    cin>>p>>m;
    int a[p];
    for(j=0;j<p;j++)
    {
      cin>>a[j];
      if(a[j]<0)
      {
          d++;
      }
    }
    sort(a,a+p);
    for(j=0;j<m;j++)
    {
        if(t<d)
        {
        b+=a[j];
        t++;
        }
    }


    cout<<(b*-1)<<endl;


    return 0;
}
