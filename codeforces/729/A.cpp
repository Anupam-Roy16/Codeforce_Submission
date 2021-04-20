#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,i,j,k;
    cin>>t;
    string a;
    cin>>a;
   //  a.erase(a.begin()+2,a.begin()+4);
    // cout<<a[2]<<endl;
    for(i=0;i<t;)
    {
        if((a[i]=='o')&&(a[i+1]=='g')&&(a[i+2]=='o'))
        {

            a[i]='*';
            a[i+1]='*';
            a[i+2]='*';
            i+=3;
        }
        else if((a[i]=='g')&&(a[i+1]=='o')&&(a[i-1]=='*')&&((i-1)>=0))
        {
            a.erase(a.begin()+i);
            a.erase(a.begin()+i);
         //   cout<<a<<endl;
           // return 0;i+=2;

        }
        else{
            i++;
        }

    }
    cout<<a<<endl;

}

