#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,j,p=0,t;
    cin>>n;
    j=n;
    while(j--)
    {
       cin>>t;
       if(t==1)
       {
           cout<<"-1"<<endl;
       }
       else{
        cout<<"2";
        t--;
        while(t--)
        {
            cout<<"3";
        }
        cout<<endl;
       }
    }

}
