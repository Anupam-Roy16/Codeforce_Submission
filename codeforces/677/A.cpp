#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    int c[a];
    int d=0;
    for(int i=0;i<a;i++)
    {
        cin>>c[i];
        if(c[i]>b)
        {
            d=d+2;
        }
        else{
            d++;
        }
    }
    cout<<d<<"\n";
    return 0;
}
