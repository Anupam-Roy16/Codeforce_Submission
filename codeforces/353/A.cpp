#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v=0,m,n,i,p=0,w=0,q=0,a,b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a!=b)
        {
            w++;
        }
if((((p%2)==0)&&((q%2)!=0))||(((p%2)!=0)&&((q%2)==0)))
{
    v++;
}
p+=a;
        q+=b;
    }
    if((((p%2)==0)&&((q%2)!=0))||(((p%2)!=0)&&((q%2)==0)))
    {
        cout<<"-1"<<endl;
    }
    else{
        if(((w==0)&&((p%2)!=0)&&((q%2)!=0))||((v==0)&&((p%2)!=0)&&((q%2)!=0)))
        {
            cout<<"-1"<<endl;
        }
        else if(((p%2)==0)&&((p%2)==0)){
            cout<<"0"<<endl;
        }
        else{
                cout<<"1"<<endl;
    }
    }
    return 0;

}
