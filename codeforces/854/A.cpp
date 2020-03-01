#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b;
    int i,j,n,p=0;
    cin>>n;
    for(i=1,j=n-1;i<j;i++,j--)
    {
        if(__gcd(i,j)==1)
        {
            if(p==0){
            a=(float)i;
            b=(float)j;
            p++;}
            else{
                    if(((float)i/(float)j)>(a/b)){
                a=(float)i;
            b=(float)j;
            }
            }
        }
    }
    cout<<a<<" "<<b<<endl;

}
