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
#include <time.h>

// The main program calls fun() and measures time taken by fun()
int main()
{
	int j,r=0,a,b,n,i,p,q=0,y=1;
	si(n);
	v(v);
	forf(i,n)
	{
	    si(p);
	    if(p==0)q++;
	    else v.pb(p);
	}
	sort(all(v));
	if(q==n){pf(0);return 0;}
	for(i=0;i<n-q-1;i++)
    {
        if(v[i]!=v[i+1])y++;
    }
    pf(y);
}
