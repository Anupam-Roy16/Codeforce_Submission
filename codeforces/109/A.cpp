#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int q,i,p,j,n;
    cin>>n;

        p=n%7;
        int t=0;
        while(p<=n)
        {
            if(p%4==0)
            {
                n-=p;
                p/=4;
                t++;
                break;
            }
            else{
                p+=7;

            }
        }
        if(t==0)
        {
            cout<<"-1"<<endl;
            return 0;
        }
         for(i=0;i<p;i++)
        {
            cout<<"4";

        }
        for(i=0;i<n/7;i++)
        {
            cout<<"7";
        }
        cout<<endl;



    return 0;
}





















