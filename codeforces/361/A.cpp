#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a;
    cin>>n>>a;
    for(i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
            if(j==i)
            {
                cout<<a;
            }
            else{
            cout<<"0";
            } 
            if(j==(n-1))
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
