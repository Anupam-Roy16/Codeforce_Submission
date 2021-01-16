#include<bits/stdc++.h>
using namespace std;
int main()
{
   int p,q,i,j;
   cin>>p>>q;
   char a[p][q];
   for(i=0;i<p;i++)
   {
       cin>>a[i];
   }
   char b[5];
   int t=0;
   for(i=1;i<p;i++)
   {
       for(j=0;j<q-1;j++)
       {
           if((a[i][j]=='f')||(a[i][j]=='c')||(a[i][j]=='a')||(a[i][j]=='e'))
           {
               b[0]=a[i][j];
               b[1]=a[i-1][j];
               b[2]=a[i][j+1];
               b[3]=a[i-1][j+1];
               b[4]='\0';

           }

           sort(b,b+4);

//cout<<b<<endl;
           if((b[0]=='a')&&(b[1]=='c')&&(b[2]=='e')&&(b[3]=='f'))
           {
               //  cout<<"erkj";
                 b[0]='p';
               t++;
           }
       }
   }
cout<<t<<endl;
   return 0;
}

