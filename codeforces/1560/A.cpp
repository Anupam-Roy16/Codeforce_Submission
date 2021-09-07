#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,j,c ,r,s,t,p,q;
    cin>>s;
    while(s--)
    {
        cin>>p;
        q=0;
        for(i=1;;i++)
        {
            t=i%10;

            if((i%3==0)||(t==3))
            {

            }
            else{
                    q++;
            }
            if(q==p)
            {
                break;
            }
        }
        cout<<i<<endl;
    }
    return 0;
}
