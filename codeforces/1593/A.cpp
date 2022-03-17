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
    int t,i,n,p,j;
    si(t);
    while(t--)
    {
       v(v);v(v1);
       forf(i,3)
       {
          cin>>j;
          v.pb(j);
          v1.pb(j);
       }
        sort(all(v));
        int a,b,c;
        c=0;
        a=
        b=v[2]+1-v1[1];
        if(v[1]==v[2])c++;
        forf(i,3)
        {
            if(v[2]==v1[i])
            {
                if(v[1]==v[2])cout<<"1";
                else{
                    cout<<"0";
                }
            }
            else{
                cout<<v[2]+1-v1[i];
            }
            if(i==2)cout<<el;
            else cout<<" ";
        }

    }
	return 0;
}
