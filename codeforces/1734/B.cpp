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
    int n,p,l,q,j,w,i=0;
    cin>>n;
    while(n--)
    {
        cin>>p;
        for(j=1;j<=p;j++)
        {
            if(j==1)cout<<"1"<<el;
            else if(j==2)cout<<"1 1"<<el;
            else{
                cout<<"1";
                for(int k=0;k<j-2;k++)
                {
                    cout<<" 0";
                }
                cout<<" 1"<<el;
            }
        }
    }

}


