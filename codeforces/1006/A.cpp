#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if((a[i]%2)==0)
        {
           if(i==0){
           cout<<a[i]-1;
           }
           else{
                cout<<" "<<a[i]-1;
        }
        }
        else{
                 if(i==0){
           cout<<a[i];
           }
           else{
               cout<<" "<<a[i];
        }
    }
    }
    return 0;
}
