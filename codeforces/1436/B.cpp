#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,p,m,k,q,u,w;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        int a[m][m];
        if(m==2)
        {
            a[0][0]=1;
            a[0][1]=1;
            a[1][0]=1;
            a[1][1]=1;
        }
        else{
            for(j=0;j<m-2;j++)
            {
                for(k=0;k<m;k++)
                {
                    if(k<m-2)
                    {
                        a[j][k]=0;
                    }
                    else{
                        a[j][k]=1;
                    }
                }
            }
            for(j=m-2;j<m;j++)
            {
                for(k=0;k<m-2;k++)
                {

                        a[j][k]=1;

                }
            }
            p=m-2;
            int e;
                for(e=p+1;;e++)
            {
                 u=0;
                for(int r=2;r<=sqrt(e);r++)
                {
                    if(e%r==0)
                    {
                        u++;
                        break;
                    }
                }
                if(u==0)
                {
                    break;
                }
            }
           // cout<<e<<endl;
           int y=e;
            e-=p;
            if(e==3)
            {
                 for(e=y+1;;e++)
            {
                 u=0;
                for(int r=2;r<=sqrt(e);r++)
                {
                    if(e%r==0)
                    {
                        u++;
                        break;
                    }
                }
                if(u==0)
                {
                    break;
                }
            }
             e-=p;
            }
            if(e%2==0)
            {
                if(e==2)
                {
                    a[m-2][m-2]=1;
            a[m-1][m-2]=1;
            a[m-2][m-1]=1;
                }
            else{
                    a[m-2][m-2]=0;
            a[m-1][m-2]=e;
            a[m-2][m-1]=e;
            }
            }
            else{

                 a[m-2][m-2]=1;
            a[m-1][m-2]=e-1;
            a[m-2][m-1]=e-1;

            }
            p+=a[m-2][m-1];
            int s=p;
            while(1)
            {
                for(e=p+1;;e++)
            {
                 u=0;
                for(int r=2;r<=sqrt(e);r++)
                {
                    if(e%r==0)
                    {
                        u++;
                        break;
                    }
                }
                if(u==0)
                {
                    break;
                }
            }

             w=e-s;
            u=0;
            for(int r=2;r<=sqrt(w);r++)
            {
                if(w%r==0)
                {
                    u++;
                    break;
                }
            }
            if(u!=0)
            {
                break;
            }
            p=e;
            }
        a[m-1][m-1]=w;
        }
        for(j=0;j<m;j++)
        {
            for(k=0;k<m;k++)
            {
                cout<<a[j][k];
                if(k!=(m-1))
                {
                    cout<<" ";
                }
                else{
                    cout<<endl;
                }
            }
        }
    }


}
