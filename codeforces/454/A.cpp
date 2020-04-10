#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,i,m,j,p=1,s,t;
    cin>>n;
    q=n;
    m=n;
    for(i=0;i<n;i++)
    {
           if(i<((n/2)+1))
            {
                q=m-p;


            }
            else{

                p-=2;
                q+=2;

            }
            for(s=0;s<(q/2);s++)
            {
                cout<<"*";
            }
            for(s=0;s<p;s++)
            {
                cout<<"D";
            }
            for(s=0;s<(q/2);s++)
            {
                cout<<"*";
            }
            if((i<((n/2)+1))&&(p!=n))
            {
                p+=2;
            }



        cout<<endl;
    }
    return 0;
}
