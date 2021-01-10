#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0,q=0,n,m,i,j;
    cin>>n>>m;
    char a[n],b;
    cin>>a;
    sort(a,a+n);
    b=a[0];

    int p=(int)a[0]-96;
       if(m==1)
    {
        cout<<p<<endl;
        return 0;
    }
    for(i=1;i<n;i++)
    {
        if((a[i]-b)>1)
        {
            p+=((int)a[i]-96);
            b=a[i];
            t++;
            if((t+1)==m)
            {
                q++;
                break;
            }
        }

    }
  if(q==1)
    {
        cout<<p<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }

}
