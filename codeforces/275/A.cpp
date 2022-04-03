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
    vector<vector<int>> v;
    int i,k,j,q;
    for(i=0;i<3;i++)
    {
        vector<int>v1;
        for(j=0;j<3;j++)
        {
            si(q);
            v1.pb(q);
        }
        v.pb(v1);
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            //cout<<"we";
            int w=v[i][j];
            //cout<<w;
            if((j-1)>=0)
            { //  cout<<"we";
                w+=v[i][j-1];
            }
            if((j+1)<=2)
            {   //cout<<"we";
                w+=v[i][j+1];
                //cout<<w;
            }
            if((i-1)>=0)
            {   //cout<<"weq";
                w+=v[i-1][j];
            }
            //cout<<i;
            if((i+1)<=2)
            {
                //cout<<"wert";
                w+=v[i+1][j];
                //cout<<w;
            }
           //cout<<w;
            if(w%2==0)cout<<"1";
            else cout<<"0";
        }
        cout<<el;
    }
    return 0;
}
