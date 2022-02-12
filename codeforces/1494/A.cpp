#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define d double
#define si(n) scanf("%d", &n)
#define sll(n) scanf("%lld", &n)
#define sull(n) scanf("%llu", &n)
#define sd(n) scanf("%lf", &n)
#define ss(s) cin>>s
#define pf(n) cout<<n<<endl
#define v(v) vector<int>v
#define pll pair <ll, ll>
#define pii pair <int, int>
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
#define inf (1LL << 61)
#define loop(i, start, stop, inc) for(ll i = start; i <= stop; i += inc)
#define forf(i,stop) for(ll i = 0; i < stop; ++i)
#define forb(i,start) for(ll i = start-1; i >= 0; --i)
#define ms(n, i) memset(n, i, sizeof(n))
#define casep(n) printf("Case %lld:", ++n)
#define EL '\n'
#define fastio std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
bool check(string s)
{
        stack<char>st;
        int i,p=s.size(),q=1;
        forf(i,p)
        {
                if((s[i]=='(')||(s[i]=='{')||(s[i]=='['))
                {

                    st.push(s[i]);
                }
                else if(st.empty())
                {
                    q=0;
                    break;
                }
                else{
                        if(((s[i]==')')&&(st.top()=='('))||((s[i]=='}')&&(st.top()=='{'))||((s[i]==']')&&(st.top()=='[')))
                        {

                            st.pop();
                        }
                        else{
                            q=0;
                            break;
                        }
                }
        }
        if(st.empty()!=1) return 0;
        else if(q==1)
        {
           return 1;
        }
        else{
            return 0;
        }
}
int main()
{
    int t,i,n;
    cin>>n;
    string s,s1="";
    while(n--)
    {
        cin>>s;
        int j,l=s.size(),q=0;
        for(i=0;i<6;i++)
        {
            if(i==0)
            {
                s1="";
                for(j=0;j<l;j++)
                {
                    if(s[j]=='A')
                    {
                        s1+='(';
                    }
                    else if(s[j]=='B')
                    {
                        s1+=')';
                    }
                    else{
                        s1+=')';
                    }
                }
                if(check(s1))
                   {
                       q++;
                       break;
                   }
            }
            else if(i==1){
                    s1="";
                 for(j=0;j<l;j++)
                {
                    if(s[j]=='A')
                    {
                        s1+=')';
                    }
                    else if(s[j]=='B')
                    {
                        s1+='(';
                    }
                    else{
                        s1+=')';
                    }
                }
                if(check(s1))
                   {
                       q++;
                       break;
                   }
            }
            else if(i==2){
                s1="";
                 for(j=0;j<l;j++)
                {
                    if(s[j]=='A')
                    {
                        s1+=')';
                    }
                    else if(s[j]=='B')
                    {
                        s1+=')';
                    }
                    else{
                        s1+='(';
                    }
                }
                if(check(s1))
                   {
                       q++;
                       break;
                   }
            }
            else if(i==3)
            {
                s1="";
                for(j=0;j<l;j++)
                {
                    if(s[j]=='A')
                    {
                        s1+=')';
                    }
                    else if(s[j]=='B')
                    {
                        s1+='(';
                    }
                    else{
                        s1+='(';
                    }
                }
                if(check(s1))
                   {
                       q++;
                       break;
                   }
          }
          else if(i==4)
          {
                 s1="";
                 for(j=0;j<l;j++)
                {
                    if(s[j]=='A')
                    {
                        s1+='(';
                    }
                    else if(s[j]=='B')
                    {
                        s1+=')';
                    }
                    else{
                        s1+='(';
                    }
                }
                if(check(s1))
                   {
                       q++;
                       break;
                   }
          }
          else if(i==5)
          {
                 s1="";
                 for(j=0;j<l;j++)
                {
                    if(s[j]=='A')
                    {
                        s1+='(';
                    }
                    else if(s[j]=='B')
                    {
                        s1+='(';
                    }
                    else{
                        s1+=')';
                    }
                }
                if(check(s1))
                   {
                       q++;
                       break;
                   }
          }
        }
        if(q==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

	return 0;
}







