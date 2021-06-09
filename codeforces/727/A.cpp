#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i;
    cin>>a>>b;
    vector<int>p;
    p.push_back(b);
    for(i=0;;i++)
    {
        if(b%10==1)
        {

    stringstream ss;
    ss << b;
    string s=ss.str();
    s.pop_back();

    stringstream dege(s);

    b = 0;
    dege >> b;

    if(b==a)
    {
           p.push_back(b);
                cout<<"YES"<<endl;
                break;
    }
    else if(b<a)
    {
         cout<<"NO"<<endl;
            return 0;
    }
    else{
        p.push_back(b);
    }

        }
        else if(b%2!=0){
            cout<<"NO"<<endl;
            return 0;
        }
        else{
            b/=2;
            if(b==a)
            {
                   p.push_back(b);
                cout<<"YES"<<endl;
                break;
            }
            else if(b<a)
    {
         cout<<"NO"<<endl;
            return 0;
    }
    else{
           p.push_back(b);
    }
        }
    }
    reverse(p.begin(),p.end());
    int y=p.size();
cout<<y<<endl;
    for(i=0;i<y;i++)
    {
        cout<<p[i];
        if(i!=(y-1))
        {
            cout<<" ";
        }
        else{
            cout<<endl;
        }
    }
}
