#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0,j,s=0,n,m,k;
    cin>>n;
    k=n;
    int q=n;
    if(k<0)
    {k*=-1;
    q*=-1;}
    m=k%10;
    k/=10;
    t=k%10;
    int w=0;
    while(i<9)
    {
        int p=q%10;

        if(p==8)
        {

            if(i>1)
            {
                if(w!=0)
                {s++;
                cout<<"1"<<endl;
                break;
                }
                else{
                        s++;
                        if(n<0)
                    {cout<<"2"<<endl;
                    }
                    else{
                        cout<<"8"<<endl;
                    }
                break;
                }
            }

        }
        if(p!=0)
        {
            w++;
        }
        q/=10;
        i++;
    }
    if(s==0)
    {
    if(n<0)
    {
         if(m==8)
         {
             if(t==8)
             {
                 cout<<"1"<<endl;
             }
             else if(t==0)
             {
                 if(k>9)
                 {
                     cout<<"2"<<endl;
                 }
                 else{cout<<m+8<<endl;}
             }
             else{
                    if(t==9)
                    {
                        cout<<"9"<<endl;
                    }
                    else{
                cout<<"10"<<endl;
             }}
         }
         else if(t==8)
         {
             if(m==0)
             {
                 cout<<"2"<<endl;
             }
             else{
                cout<<"1"<<endl;
             }
         }
        else if(m==9)
        {
            cout<<"1"<<endl;
        }
        else{
            if(t==9)
            {
                cout<<m+1<<endl;
            }
            else{
                    if(t==0)
                    {
                        if(k<9)
                        {cout<<8+m<<endl;
                        }
                        else{
                            cout<<"2"<<endl;
                        }
                    }
                else{cout<<m+2<<endl;}
            }
        }
    }
    else{

            if(m==8)
         {
             if(t!=7)
             {
                 cout<<"10"<<endl;
             }
             else{
                 cout<<"2"<<endl;
             }
         }
         else if(t==8)
         {
             if(m!=9)
            {cout<<"1"<<endl;}
            else{
                cout<<"9"<<endl;
            }
         }
          else if(m!=9)
          {
              cout<<8-m<<endl;
          }
          else{
            if(t==7)
            {
                cout<<"1"<<endl;
            }
            else{
                cout<<"9"<<endl;
            }
          }

    }
    }
    return 0;
}
