#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,z,b,c;

    scanf("%d\n",&n);
    int a[n-1];
    for(int i=0;i<n;i++)
    {
        cin>>b;
        cin>>c;
        if(i==0)
        {
            a[i]=c;
        }
        else if(i==(n-1))
        {

        }
        else
        {
            a[i]=a[i-1]-b+c;
        }

    }
    sort(a,a+n-1);
    cout<<a[n-2]<<"\n";
    return 0;
}
