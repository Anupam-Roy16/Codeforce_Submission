#include<bits/stdc++.h>
using namespace std;
int main()
{
   int N,I,i;
   cin>>N;
   char A[N+1];
   cin>>A;
   int b[26];
   for(I=0;I<26;I++)
   {
       b[I]=0;
   }
   int S=strlen(A);
   for(I=0;I<S;I++)
   {
       if(A[I]=='a')
       {
           b[0]++;
       }
       else if(A[I]=='b')
       {
           b[1]++;
       }
       else if(A[I]=='c')
       {
           b[2]++;
       }
       else if(A[I]=='d')
       {
           b[3]++;
       }
       else if(A[I]=='e')
       {
           b[4]++;
       }
       else if(A[I]=='f')
       {
           b[5]++;
       }
       else if(A[I]=='g')
       {
           b[6]++;
       }
       else if(A[I]=='h')
       {
           b[7]++;
       }
       else if(A[I]=='i')
       {
           b[8]++;
       }
       else if(A[I]=='j')
       {
           b[9]++;
       }
       else if(A[I]=='k')
       {
           b[10]++;
       }
       else if(A[I]=='l')
       {
           b[11]++;
       }
       else if(A[I]=='m')
       {
           b[12]++;
       }
       else if(A[I]=='n')
       {
           b[13]++;
       }
       else if(A[I]=='o')
       {
           b[14]++;
       }
       else if(A[I]=='p')
       {
           b[15]++;
       }
       else if(A[I]=='q')
       {
           b[16]++;
       }
       else if(A[I]=='r')
       {
           b[17]++;
       }
       else if(A[I]=='s')
       {
           b[18]++;
       }
       else if(A[I]=='t')
       {
           b[19]++;
       }
       else if(A[I]=='u')
       {
           b[20]++;
       }
       else if(A[I]=='v')
       {
           b[21]++;
       }
       else if(A[I]=='w')
       {
           b[22]++;
       }
       else if(A[I]=='x')
       {
           b[23]++;
       }
       else if(A[I]=='y')
       {
           b[24]++;
       }
       else
       {
           b[25]++;
       }

   }
   int p=26;
   for(I=0;I<26;I++)
   {
       if(b[I]==0)
       {
           p--;
           b[I]=-1;
       }
   }
   int c[26];
   for(I=0;I<26;I++)
   {
       c[I]=b[I];
   }
   for(I=1;;I++)
   {
       int q=0;
       for(i=0;i<26;i++)
       {
           b[i]--;
           if(b[i]==0)
           {
               q++;
               break;
           }
       }
       if(q==1)
       {
           break;
       }
   }
   int w=0;
   for(i=0;i<26;i++)
   {
       if(c[i]>0){
       w+=(c[i]-I);
       }
   }
   int d=(p*(I-1))+w;
   if(d>(26-p))
   {
       cout<<"-1";
   }
   else{
   cout<<d<<endl;
   }
   return 0;
}
