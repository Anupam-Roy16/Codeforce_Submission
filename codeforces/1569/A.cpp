#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,j,c ,r,s,t,p,q;
    cin>>s;
    while(s--)
    {
        cin>>p;
        string z;
        cin>>z;
        r=0;
            q=0;
        for(i=0;i<p;i++)
        {

            if(z[i]=='a')
            {
                q++;
            }
            else if(z[i]=='b'){
                r++;
            }
        }
        if((r==0)||(q==0))
            {
                cout<<"-1 -1"<<endl;
            }
            else{
                for(i=0;i<p-1;i++)
                {
                    if((z[i]=='a')&&(z[i+1]=='b'))
                    {
                        break;
                    }
                    else if((z[i]=='b')&&(z[i+1]=='a'))
                    {
                        break;
                    }
                }
                cout<<i+1<<" "<<i+2<<endl;

            }
    }
    return 0;
}
