#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,i,j,q=0,p=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a!=-1)
        {
            p+=a;
        }
        else if(p!=0){
            p--;
        }
        else{
            q++;
        }
    }
    cout<<q<<endl;
}
