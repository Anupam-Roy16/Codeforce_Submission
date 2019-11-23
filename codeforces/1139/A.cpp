#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    int c=0;
    int p=0;
    for(int i=0;i<n;i++)
    {
            if(((int)a[i]%2)==0)
            {
                c=c+i+1;
            }

    }
 cout<<c<<"\n";
    return 0;
}