#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,w=0,b=0;
    char a[8][8];
    char c;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            cin>>a[i][j];
            if(a[i][j]!='.')
            {
                c=a[i][j];
                if((c>='A')&&(c<='Z'))
                {
                   if(c=='Q')
                   {
                       w+=9;
                   }
                   else if(c=='R')
                   {
                       w+=5;
                   }
                   else if(c=='B')
                   {
                       w+=3;
                   }
                   else if(c=='N')
                   {
                       w+=3;
                   }else if(c=='P')
                   {
                       w+=1;
                   }
                   else if(c=='K')
                   {
                       w+=0;
                   }
                }
                else{
                    if(c=='q')
                   {
                       b+=9;
                   }
                   else if(c=='r')
                   {
                       b+=5;
                   }
                   else if(c=='b')
                   {
                       b+=3;
                   }
                   else if(c=='n')
                   {
                       b+=3;
                   }else if(c=='p')
                   {
                       b+=1;
                   }
                   else if(c=='k')
                   {
                       b+=0;
                   }
                }
            }
        }
    }
    if(w>b)
    {
        cout<<"White"<<endl;
    }
    else if(b>w)
    {
        cout<<"Black"<<endl;
    }
    else{
        cout<<"Draw"<<endl;
    }
    return 0;
}
