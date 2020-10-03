#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,m,j,r=-1,w=0,p=-1,q=0;
    char a='a';
    cin>>t>>m;
    char b[t];
    if(t==m)
    {
       for(i=0;i<t;i++)
       {
           cout<<(char)(a+i);
           if(i==(t-1))
           {
               cout<<endl;
           }
       }
    }
    else{
        m=m-1;


        i=0;
        while(i<t)
        {
            b[i]='a';
            i+=2;
        }
        i=1;

        int p=1,w=0;
        while(i<t)
        {

            if(p>m)
            {
                w++;
                b[i]=(char)(a+p-1);
                i+=2;
            }
            else{
            b[i]=(char)(a+p);
            p++;
            i+=2;
            }
        }
        if(w==0)
        {
            i=0;
            while(p<=m)
            {
                b[i]=(char)(a+p);
                i+=2;
                p++;
            }
        }
        for(i=0;i<t;i++)
    {
        cout<<b[i];
        if(i==(t-1))
        {
            cout<<endl;
        }
    }

    }


}
