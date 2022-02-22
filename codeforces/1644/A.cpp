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
#define map(p) map<int,int>p
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
#define el '\n'
#define fastio std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool cmp(const pair<char,int>& p,const pair<char,int>& q)
{
    if(p.second>q.second)return 1;
    else return 0;
}
int main()
{
    int n,l,q;
    si(l);
    string s;
    while(l--)
    {
        cin>>s;
        int i,j,t=0;
        for(i=0;i<3;i++)
        {
            int p=0,q=0;
            for(j=0;j<6;j++)
            {
                if(i==0)
                {
                    if(s[j]=='r')
                    {
                        p=j;
                    }
                    if(s[j]=='R')
                    {
                        q=j;
                    }
                }
                else if(i==1)
                {
                    if(s[j]=='b')
                    {
                        p=j;
                    }
                    if(s[j]=='B')
                    {
                        q=j;
                    }
                }
                else{
                    if(s[j]=='g')
                    {
                        p=j;
                    }
                    if(s[j]=='G')
                    {
                        q=j;
                    }
                }
            }
          //  cout<<p<<" "<<q<<el;
            if(q<p)
            {
                t++;
                break;
            }
        }
        if(t==0)cout<<"YES"<<el;
        else cout<<"NO"<<el;
    }
	return 0;
}






