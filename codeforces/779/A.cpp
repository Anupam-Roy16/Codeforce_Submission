#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,u,v,w,x,y,z,c=0,d=0,e=0,f=0,g=0,h=0,j=0,k=0,n,i,p=0,q=0;
   cin>>n;
   int a[n],b[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]==1)
       {
           p++;
       }
       else if(a[i]==2)
       {
           q++;
       }
       else if(a[i]==3)
       {
           c++;
       }
       else if(a[i]==4)
       {
           d++;
       }
       else{
        e++;
       }
   }
   for(i=0;i<n;i++)
   {
       cin>>b[i];
       if(b[i]==1)
       {
           f++;
       }
       else if(b[i]==2)
       {
           g++;
       }
       else if(b[i]==3)
       {
           h++;
       }
       else if(b[i]==4)
       {
           j++;
       }
       else{
        k++;
       }
   }
   if((p+f)%2!=0)
      {
        cout<<"-1"<<endl;
      }
   else if((q+g)%2!=0)
    {
         cout<<"-1"<<endl;
    }
    else if((c+h)%2!=0)
    {
         cout<<"-1"<<endl;
    }
    else if((d+j)%2!=0)
    {
         cout<<"-1"<<endl;
    }
    else if((k+e)%2!=0)
    {
         cout<<"-1"<<endl;
    }
    else{
       t=0;
       u=0;
       z=(p+f)/2;
       y=(q+g)/2;
       x=(c+h)/2;
       w=(d+j)/2;
       v=(k+e)/2;
       if(p<=z)
       {
           u+=(z-p);
       }
       else if(f<=z)
       {
           t+=(z-f);
       }
       if(c<=x)
       {
           u+=(x-c);
       }
       else if(h<=x)
       {
           t+=(x-h);
       }
       if(q<=y)
       {
           u+=(y-q);
       }
       else if(g<=y)
       {
           t+=(y-g);
       }
       if(d<=w)
       {
           u+=(w-d);
       }
       else if(j<=w)
       {
           t+=(w-j);
       }
       if(e<=v)
       {
           u+=(v-e);
       }
       else if(k<=v)
       {
           t+=(v-k);
       }

       cout<<max(u,t)<<endl;
    }


   return 0;
}
