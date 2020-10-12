#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,p=0,q=0,i;
    cin>>n;
    for(i=0;;i++)
    {
        p=n%10;
        if(p==0)
        {
            cout<<"O-|-OOOO"<<endl;
        }
        else if(p==1)
        {
             cout<<"O-|O-OOO"<<endl;
        }
        else if(p==2)
        {
             cout<<"O-|OO-OO"<<endl;
        }
        else if(p==3)
        {
             cout<<"O-|OOO-O"<<endl;
        }
        else if(p==4)
        {
          cout<<"O-|OOOO-"<<endl;
        }
        else if(p==5)
        {
             cout<<"-O|-OOOO"<<endl;
        }
        else if(p==6)
        {
           cout<<"-O|O-OOO"<<endl;
        }
        else if(p==7)
        {
             cout<<"-O|OO-OO"<<endl;
        }
        else if(p==8)
        {
             cout<<"-O|OOO-O"<<endl;
        }
        else
        {
             cout<<"-O|OOOO-"<<endl;
        }
        n/=10;
        if(n==0)
        {
            break;
        }
    }
    return 0;

}
