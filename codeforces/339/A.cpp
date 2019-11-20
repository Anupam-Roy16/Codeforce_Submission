#include<bits/stdc++.h>
using namespace std;
int main()
{
  char a[101];
  gets(a);
  char b[60];
  int p=0;
  for(int i=0;i<strlen(a);i=i+2)
  {
      b[p]=a[i];
      p++;
  }
  sort(b,b+p);
  for(int j=0;j<p;j++)
  {
      cout<<b[j];
      if(j!=(p-1))
      {
          cout<<"+";
      }
  }
  cout<<"\n";

  return 0;
}
