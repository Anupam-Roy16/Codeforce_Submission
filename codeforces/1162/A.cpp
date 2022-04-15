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
	// Calculate the time taken by fun()
	ll r,a,b,n,i,p,q;

	sll(n),sll(p),sll(q);
	v(v);
	for(i=0;i<n+1;i++)
    {
        v.pb(51);
    }
	while(q--)
    {
       sll(a),sll(b),sll(r);
       for(i=a;i<b+1;i++)
       {
           if(r<v[i])
           {
               v[i]=r;
           }
       }
    }
    ll t=0;
    for(i=1;i<n+1;i++)
    {
        if(v[i]==51)
        {
            t+=(p*p);
        }
        else{
            t+=(v[i]*v[i]);
        }
    }
    pf(t);
	return 0;
}
