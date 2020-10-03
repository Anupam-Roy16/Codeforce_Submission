#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,m,r,p=0,q=0;
    cin>>t;
    int a[t];
    for(i=0;i<t;i++)
    {
        cin>>a[i];
        p+=a[i];
    }

    cin>>m>>r;
    int w;
    if(m==r)
    {
        cout<<"0"<<endl;
    }
    else if(m<r){
        m--;
        r-=2;
        i=m;
        while(i<=r)
        {
           q+=a[i];
           i++;
        }
        w=(p-q);
        if(w>q)
        {
            cout<<q<<endl;
        }
        else{
            cout<<w<<endl;
        }
    }
    else{
        m-=2;
        r--;
        i=m;

        while(i>=r)
        {
           q+=a[i];
           i--;
        }

        w=(p-q);


        if(w>q)
        {
            cout<<q<<endl;
        }
        else{
            cout<<w<<endl;
        }
    }




}
