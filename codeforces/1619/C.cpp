#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    while(n--)
    {
        string s1,s2,s="";
        cin>>s1>>s2;
        int j=s2.size()-1;
        int z=0;
        for(i=s1.size()-1;i>=0;i--)
        {
            if(s1[i]<=s2[j])
            {
                s+=(s2[j]-s1[i]+'0');
                j--;
            }
            else{
                string x="";
                x+=s2[j];
                x+=s2[j-1];
                reverse(x.begin(),x.end());
                stringstream dege(x);
                int d = 0;
                dege >> d;
                int r=s1[i]-'0';
                d-=r;
                if((d>9)||(d<0))
                {
                    z++;
                    cout<<"-1"<<endl;
                    break;
                }
                s+=(d+'0');
                j-=2;
            }
            if(j<0)
            {
                break;
            }
        }
        if(z==1)
        {
            continue;
        }
        if(j>=0)
        {
           // cout<<"s"<<endl;
            for(int k=j;k>=0;k--)
            {
                s+=s2[k];
            }

            for(j=s.size()-1;;j--)
            {
                if(s[j]=='0')
                {
                    s.pop_back();
                }
                else{
                    break;
                }
            }
            reverse(s.begin(),s.end());
            cout<<s<<endl;
        }
        else{
        if(i==0)
        {

            for(j=s.size()-1;;j--)
            {
                if(s[j]=='0')
                {
                    s.pop_back();
                }
                else{
                    break;
                }
            }
            reverse(s.begin(),s.end());
            cout<<s<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
        }
    }
}
