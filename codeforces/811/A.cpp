#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i,b,a;
    cin>>a>>b;
    for(i=1;;i++)
    {
        if(i%2==0)
        {
            b-=i;
            if(b<0)
            {
                break;
            }
        }
        else{
            a-=i;
            if(a<0)
            {
                break;
            }
        }
    }
    if(i%2==0)
    {
        cout<<"Valera"<<endl;
    }
    else{
        cout<<"Vladik"<<endl;
    }
    return 0;
}
