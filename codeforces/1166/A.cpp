#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,j,k,p=0,q=0,n;
   cin>>n;
   char a[n][21];
   char b[n];
   int c[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
       b[i]=a[i][0];
   }

   for(i=0;i<n-1;i++)
   {
       if(b[i]!='0'){
       for(j=i+1;j<n;j++)
       {
           if(b[i]==b[j])
           {
               p++;
               b[j]='0';
           }
       }
       c[q]=p+1;
       p=0;
       q++;
   }
   }

sort(c,c+q);
int s=0;

for(i=q-1;i>=0;i--)
{
    if((c[i]==2)||(c[i]==1)||(c[i]==0))
    {

    }
    else{
        if((c[i]%2)==0)
        {
            int w=c[i]/2;
            w*=(w-1);
            s+=w;
        }
        else{
            int w=c[i]/2;
            int p=w+1;
            if(w!=1){
            w*=(w-1);

            w/=2;
            s+=w;
            }
            p*=(p-1);
            p/=2;
            s+=p;
        }
    }
}
cout<<s<<endl;
   return 0;
}
