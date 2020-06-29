#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,d,e,f,i;
    cin>>a>>b>>c>>d>>e>>f;
    for(i=b;;i--)
    {
         a+=i;
         if(i==0)
        {
            break;
        }

        if(i==d)
        {
            a-=c;
            if(a<0)
            {
                a=0;
            }
        }
        else if(i==f)
        {
            a-=e;
            if(a<0)
            {
                a=0;
            }
        }

    }
    cout<<a<<endl;

}
