#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    string s;
    cin>>s;
    cin>>k;
    if(k>s.size())
    {
        cout<<"impossible"<<endl;
    }
    else{
    sort(s.begin(),s.end());
    int n = unique( s.begin(), s.end() ) - s.begin();
    if(n>=k)
    {
        cout<<"0"<<endl;
    }
    else{
            cout<<k-n<<endl;
    }
    }
   return 0;
}
