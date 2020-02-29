#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<(a*10)<<" "<<(b*10)+1<<endl;
    }
    else if((b-a)==1)
    {
        cout<<(a*10)+9<<" "<<(b*10)<<endl;
    }
    else{
            if((a==9)&&(b==1))
        {cout<<"9"<<" "<<"10"<<endl;
        }else{cout<<"-1"<<endl;
    }
    }
    return 0;
}
