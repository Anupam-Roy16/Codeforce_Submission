#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,i,a[4];
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    int c=0;
    for(i=0;(i<3);i++)
    {


    for(j=i+1;((j<4)&&(a[i]!=-1));j++)
    {

        if(a[i]==a[j])
        {

            c++;
            a[j]=-1;
        }
    }
    }
    cout<<c<<"\n";

    return 0;
}
