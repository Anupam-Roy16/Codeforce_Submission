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
int main()
{
	ull q,i,a,b,x,y,p,j;
	int n;
	si(n);
	while(n--)
    {
        sull(p);
        vector<ull>v;
        forf(i,p)
        {
            sull(x);
            v.pb(x);
        }
        sort(all(v));
        a=v[0];
        b=0,q=0;
        for(i=1,j=p-1;;i++,j--)
        {
            a+=v[i];
            b+=v[j];
            //cout<<a<<" "<<b<<el;
           // cout<<i<<" "<<j<<el;
            if(a<b){q++;break;}
            if(((j-i)==2)||((j-i)==1))break;
        }

        if(q==1)cout<<"YES"<<el;
        else cout<<"NO"<<el;
    }
}
