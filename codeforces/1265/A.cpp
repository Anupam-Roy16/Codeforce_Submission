#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        char a[100001];
        cin>>a;
        int l=strlen(a);
        int p=0;
        for(j=0;j<l-1;j++)
        {
            if((a[j]==a[j+1])&&(a[j]!='?'))
            {
              p++;
              cout<<"-1"<<endl;
              break;
            }
        }
        char s='a';
        int e=(int)s;
        if(p==0)
        {
            for(j=0;j<l;j++)
            {
              if((a[j]=='?')&&(j!=0)&&(j!=(l-1)))
              {
                  for(int w=e;w<e+3;w++)
                  {
                    if(((int)a[j-1]!=w)&&((int)a[j+1]!=w))
                  {
                      a[j]=(char)w;
                      break;
                  }
                  }
              }
               else if((a[j]=='?')&&(j==0))
               {
                  for(int w=e;w<e+3;w++)
                  {
                    if((int)a[j+1]!=w)
                  {
                      a[j]=(char)w;
                      break;
                  }
                  }
               }
               else if((a[j]=='?')&&(j==(l-1)))
               {
                  for(int w=e;w<e+3;w++)
                  {
                    if((int)a[j-1]!=w)
                  {
                      a[j]=(char)w;
                      break;
                  }
                  }
               }
            }
             cout<<a<<endl;
        }

    }
    return 0;

}
