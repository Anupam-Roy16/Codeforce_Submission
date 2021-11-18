#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        char a=*min_element(s.begin(),s.end());
        cout<<a<<" ";
        int p=0;
        for(i=0;i<s.size();i++)
        {
            if((s[i]==a)&&(p==0))
            {
                p++;
            }
            else{
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
