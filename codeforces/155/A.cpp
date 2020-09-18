#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,l,m,p=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {


        cin>>a[i];
        if(i!=0){
           if((a[i]<l)||(a[i]>m))
        {
            p++;
        }
        }
        if(i==0)
        {
            l=a[i];
            m=a[i];
        }
        else if(a[i]<l)
        {
            l=a[i];
        }
        else if(a[i]>m)
        {
            m=a[i];
        }


    }
    cout<<p<<endl;

    return 0;
}
