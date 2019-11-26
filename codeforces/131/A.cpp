#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n=0;
    char a[100];
    gets(a);
    int l=strlen(a);
    for(i=0;i<l;i++)
    {
        if((a[i]>='A')&&(a[i]<='Z'))
        {
            n++;
        }
    }

    if(n==l)
    {
    for(i=0;i<l;i++)
      {
          cout<<(char)((int)a[i]+32);
      }
        cout<<"\n";
    }
    else if((n==(l-1))&&(a[0]>='a'))
    {
    for(i=0;i<l;i++)
      {
          if(i==0)
          {
              cout<<(char)((int)a[i]-32);
          }
          else{
            cout<<(char)((int)a[i]+32);
          }
      }
         cout<<"\n";
    }
    else if((l==1)&&(n==0))
    {
        cout<<(char)((int)a[0]-32)<<"\n";
    }
    else{
         for(i=0;i<l;i++)
      {
          cout<<a[i];
      }

      cout<<"\n";
    }
    return 0;
}
