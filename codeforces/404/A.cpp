#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    char a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int p=0,q=0,r=0;
    for(i=1;i<n;i++)
    {
      if(a[i][i]!=a[0][0])
      {
          p++;
      }
    }
    if(p==0)
    {
       for(i=0;i<n;i++)
       {
           if(a[i][n-1-i]!=a[0][0])
           {
               q++;
           }
       }
       if(q==0)
       {
           for(i=0;i<n;i++)
           {
               for(j=0;j<n;j++)
               {
                   if((j!=(n-1-i))&&(j!=i))
                   {
                       if((a[0][1]!=a[i][j])||(a[i][j]==a[0][0]))
                       {
                           r++;
                       }
                   }
               }
           }
           if(r==0)
           {
               cout<<"YES"<<endl;
               return 0;
           }
           else{
            cout<<"NO"<<endl;
         return 0;
           }
       }
       else{
         cout<<"NO"<<endl;
         return 0;
       }
    }
    else{
        cout<<"NO"<<endl;
        return 0;
    }

    return 0;
}
