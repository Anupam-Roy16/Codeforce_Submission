#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p=0;
    unsigned long long sum=0,q=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            sum+=((a[i]*-1)-1);
            p++;
        }
        else if(a[i]>0){
            sum+=(a[i]-1);
        }
        else{
                q++;
            sum+=1;
        }
    }
    if((p%2)!=0)
    {
        if(q!=0){
        cout<<sum<<endl;}
        else{
            cout<<sum+2<<endl;
        }
    }
    else{
        cout<<sum<<endl;
    }

    return 0;
}
