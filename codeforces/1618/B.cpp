#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,r,n,i;
    cin>>n;
    while(n--)
    {
        cin>>p;
        string s;
        char c;
        cin>>c;
        getline(cin,s);
        s=c+s;
        if(p==3)
        {
            s+='a';
            cout<<s<<endl;
        }
        else{
            int x=0;
            q=s.size();
            for(i=1;i<q-3;i+=3)
            {
                if(s[i]!=s[i+2])
                {
                    x++;
                    break;
                }
            }
            int j;
            string d="";
        if(x==1)
        {

            for(j=0;j<q-1;j+=3)
            {
                d+=s[j];
                if(j==(i-1))
                {
                    d+=s[i];
                }
            }
            d+=s[q-1];

        }
        else{

            for(j=0;j<q-1;j+=3)
            {
                d+=s[j];
            }
            d+=s[q-1];
            d+=s[q-1];

        }
        cout<<d<<endl;
        }
    }
    return 0;
}
