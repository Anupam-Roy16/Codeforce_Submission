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
    si(n);
    v(v);
    v={11,111,1111,11111,111111,1111111,11111111,111111111};
    while(n--)
    {
        si(p);
        if(p<=9)pf(p);
        else{
            int q,r=0;
            for(i=0;i<8;i++)
            {
                q=0;
                for(j=0;j<9;j++)
                {
                    q+=v[i];
                   // cout<<p<<" "<<q<<el;
                    if(p>=q)
                    {
                        r++;
                    }
                    else{

                        q=1;
                         break;
                    }

                }
               //cout<<q<<el;
                if(q==1){break;}

            }
            //cout<<"w";
            //si(r);
            pf(r+9);
        }
    }
	return 0;
}
