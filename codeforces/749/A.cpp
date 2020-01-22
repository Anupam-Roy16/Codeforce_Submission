#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    cout<<n/2<<endl;
    if((n%2)==0)
    {
        for(i=0;i<n/2;i++)
        {
            cout<<"2";
            if(i==((n/2)-1))
            {
                cout<<endl;
            }
            else{
                cout<<" ";
            }
        }
    }
        else{
                cout<<"3 ";
            for(i=1;i<n/2;i++)
        {
            cout<<"2";
            if(i==((n/2)-1))
            {
                cout<<endl;
            }
            else{
                cout<<" ";
            }
        }
        }
    return 0;
}
