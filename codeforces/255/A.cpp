#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0,q=0,b=0,j,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==2)
    {
        if(a[0]>a[1])
        {
            cout<<"chest"<<endl;
        }
        else{
            cout<<"biceps"<<endl;
        }
    }
    else if(n==1)
    {
        cout<<"chest"<<endl;
    }
    else{

    for(i=0;i<n;i=i+3)
    {
        c=c+a[i];
    }
    for(i=1;i<n;i=i+3)
    {
        q=q+a[i];
    }
    for(i=2;i<n;i=i+3)
    {
        b=b+a[i];
    }
    if(c>q)
    {
        if(c>b)
        {
            cout<<"chest"<<endl;
        }
        else{
            cout<<"back"<<endl;
        }
    }
    else{
        if(q>b)
        {
            cout<<"biceps"<<endl;
        }
        else{
            cout<<"back"<<endl;
        }
    }

    }

    return 0;
}
