#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define dd double
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

int main()
{
    int t,p,q,l,m,j,i;
    si(t);
    string s1;
    int s2;
    string s3;
    int s4;
    while(t--)
    {
        cin>>s1;
        cin>>s2;
        cin>>s3;
        cin>>s4;
        int d,e;
        l=s1.size();
        d=l;
        l+=s2;
        p=s3.size();
        e=p;
        p+=s4;
        if((l)>(p))
        {
            cout<<">"<<el;
        }
        else if((l)<(p))
        {
            cout<<"<"<<el;
        }
        else{
            int x=0;
            for(i=0;i<max(d,e);i++)
            {
                if(i>=d)s1.pb('0');
                else if(i>=e)s3.pb('0');
                if(s1[i]>s3[i])
                {
                    x=1;
                    break;
                }
                else if(s1[i]<s3[i])
                {
                    x=2;
                    break;
                }
            }
            if(x==0)cout<<"="<<el;
            else if(x==1)cout<<">"<<el;
            else cout<<"<"<<el;
        }
    }
	return 0;
}
