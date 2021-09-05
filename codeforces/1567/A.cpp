#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,c,d,r,s,t,p,q;
    cin>>t;
    while(t--)
    {
        cin>>p;
        string s;
        cin>>s;
        for(i=0;i<p;i++)
        {
            if(s[i]=='U')
            {
                cout<<"D";
            }
            else if(s[i]=='D')
            {
                cout<<"U";
            }
            else if(s[i]=='L'){
                cout<<"L";
            }
            else{
                cout<<"R";
            }
        }
        cout<<endl;
    }
    return 0;
}
