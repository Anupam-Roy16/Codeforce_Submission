#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n;
    unsigned long long sum=0,l=0;
    cin>>n;
    unsigned long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    for(i=0;i<(n/2);i++)
    {
        sum+=a[i];
    }

    for(i=n-1;i>=(n/2);i--)
    {
        l+=a[i];
    }

        cout<<(sum*sum)+(l*l)<<endl;


    return 0;
}
