#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long sum=0;
    int  i, j=0,k=0,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    for(i=n-1;i>=0;i--)
    {
       
        if((a[i]%2)==0)
        {
            sum=sum+a[i];
        }
        else{
            k++;
        }
    }

    if((k%2)!=0)
    {
        k--;
    }

    for(i=n-1;i>=0;i--)
    {
        if(((a[i]%2)!=0)&&(j<k))
        {
            sum+=a[i];
            j++;
        }
    }

    cout<<sum<<endl;

}
