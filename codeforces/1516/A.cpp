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
    ull n,l,q,d,e,i,j;
    int p,r;
    sull(n);
    while(n--)
    {
        sull(l),sull(q);
        v(v);
        forf(i,l)
        {
            si(p);
            v.pb(p);
        }
        for(i=0,j=l-1;;i++)
        {
            if(i==j)break;
            if(v[i]==0)
            {
              //cout<<v[i]<<" "<<v[j]<<" "<<q<<el;
            }
            else if(v[i]<=q)
            {
                e=v[i];

                q-=v[i];
                v[i]=0;
                v[j]+=e;
                // cout<<v[i]<<" "<<v[j]<<" "<<q<<el;
            }
            else{
                v[i]-=q;
                v[j]+=q;
                q=0;
                 //cout<<v[i]<<" "<<v[j]<<el;
                break;
            }
        }
        forf(i,l)
        {
            cout<<v[i];
            if(i!=l-1)cout<<" ";
            else cout<<el;
        }
    }
	return 0;
}
