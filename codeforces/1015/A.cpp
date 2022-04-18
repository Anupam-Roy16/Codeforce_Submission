#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define dbl double
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
#define el '\n'
#define fastio std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
   int n,m,p,q,a,b,x,y,i;
   si(n),si(m);
   v(v);
   for(i=0;i<m+1;i++)
   {
       v.pb(0);
   }
   while(n--)
   {
        si(x),si(y);
        for(i=x;i<=y;i++)
        {
            v[i]++;
        }
   }
   q=0;
   for(i=1;i<=m;i++)
   {
       if(v[i]==0)q++;
   }
   pf(q);
   a=0;
   for(i=1;i<=m;i++)
   {
       if(v[i]==0)
       {
           cout<<i;
            a++;

       if(a==q)cout<<el;
       else cout<<" ";
       }
   }
   return 0;
}


