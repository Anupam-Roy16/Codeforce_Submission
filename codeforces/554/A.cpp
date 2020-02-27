#include<bits/stdc++.h>
using namespace std;
int main()
{
   char a[21];
   gets(a);
   int l,m,n;
   m=strlen(a);
   l=26-m;
   l*=(m+1);
   l+=(m*m);
   cout<<l<<endl;
   
}