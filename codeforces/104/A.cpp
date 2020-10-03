#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,m,j,r=-1,w=0,p=-1,q=0;
    cin>>t;
    t-=10;
    if((t>11)||(t<0))
    {
        cout<<"0"<<endl;
    }
    else if(t==10)
    {
        cout<<"15"<<endl;
    }
    else if(t==11)
    {
        cout<<"4"<<endl;
    }
    else if(t==1)
    {
        cout<<"4"<<endl;
    }
    else{
            if(t!=0){
        cout<<"4"<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
    }

}
