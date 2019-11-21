#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1001];
    gets(a);
    if((a[0]>='A')&&(a[0]<='Z'))
    {
      for(int i=0;i<strlen(a);i++)
      {
          cout<<a[i];
      }
      cout<<"\n";
    }
    else{
        a[0]=a[0]-32;
            for(int i=0;i<strlen(a);i++)
      {
          cout<<a[i];
      }
      cout<<"\n";

    }
}
