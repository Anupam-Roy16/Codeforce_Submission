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
    ull n,l,q,d,i=0,t=0;
    sull(l),sull(q);
    v(v);
    while(l--)
    {
        ull x,y;

        sull(n);
        sull(d);

         x=n;

        if(n>d)x=d;
         t+=x;
        n*=2;
        y=n;

        if(n>d)y=d;
        //cout<<y<<" "<<x<<el;
        if(y<=x)
        {

            v.pb(0);

        }
        else{
            v.pb(y-x);
        }


    }
    sort(v.rbegin(),v.rend());
    for(i=0;i<q;i++)
    {
        t+=v[i];
    }
    pf(t);
	return 0;
}
