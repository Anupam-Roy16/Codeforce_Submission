#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a;
        cin>>b;
        if((b-a)>=2)
        {
            c++;
        }
    }
    cout<<c<<"\n";
    return 0;
}
