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
int main()
{
    int p,n,t,w;
    si(n);
    while(n--)
    {
        cin>>p;
        v(v);v(v1);
        int y=1,l=0,e,j,g=0;
        forf(i,p)
        {
            cin>>w;
            v.pb(w);
            if((y!=w)&&(l==0))
            {
                g=y;
                l++;
                t=i;
            }
            y++;
        }
        if(p==1)
        {
            cout<<v[0]<<endl;
            continue;
        }
        else if(g==0)
        {
            forf(i,p)
        {
            cout<<v[i];
            if(i!=p-1)
            {
                cout<<" ";
            }
            else{
                cout<<endl;
            }
        }
        continue;
        }
        forf(i,p)
        {
            if(v[i]==g)
            {
                e=i;
            }
        }
        for(j=e;j>=t;j--)
        {
            v1.pb(v[j]);
        }
        int i=0;
        for(j=t;j<=e;j++)
        {
            v[j]=v1[i];
            i++;
        }
        forf(i,p)
        {
            cout<<v[i];
            if(i!=p-1)
            {
                cout<<" ";
            }
            else{
                cout<<endl;
            }
        }
    }

	return 0;
}







