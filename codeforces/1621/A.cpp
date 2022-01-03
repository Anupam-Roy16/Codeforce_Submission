#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,i,n,j;
    cin>>n;
    while(n--)
    {
        int y,x=0;
        cin>>p>>q;
        if(q==1)
        {
            x++;
        }
        else{
            y=q-2;
            y*=2;
            y+=3;
            if(p>=y)
            {
                x++;
            }
        }
        if(x==0)
        {
            cout<<"-1"<<endl;
        }
        else{
            for(i=0;i<p;i++)
            {
                for(j=0;j<p;j++)
                {
                    if((i%2==0)&&(j%2==0)&&(i==j))
                    {
                        if(q>0)
                        {cout<<"R";}
                        else{
                            cout<<".";
                        }
                        q--;
                    }
                    else{
                        cout<<".";
                    }
                    if(j!=(p-1))
                    {

                    }
                    else{
                        cout<<endl;
                    }
                }

            }
        }
    }
}
