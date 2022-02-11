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

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// returns a random ll integer in [l, r] range
inline ll gen_random(ll l, ll r) {
    return uniform_int_distribution<ll>(l, r)(rng);
}

// === DEBUG MACRO STARTS HERE === //
#ifdef LOCALXOX
#define DEBUG
#define SYS_COL system("COLOR")
#endif

int recur_depth = 0;
#ifdef DEBUG
#define dbg(x) {++recur_depth; auto x_=x; --recur_depth; SYS_COL; \
                cerr<<string(recur_depth, '\t')<<"\e[91m"<<__func__<<":" \
                <<__LINE__<<"\t"<<#x<<" = "<<x_<<"\e[39m"<<endl;}

template<typename Ostream, typename Cont>
typename enable_if<is_same<Ostream,ostream>::value,
            Ostream&>::type operator<<(Ostream& os,  const Cont& v) {
	os<<"[";
	for(auto& x:v){os<<x<<", ";}
	return os<<"]";
}
template<typename Ostream, typename ...Ts>
Ostream& operator<<(Ostream& os,  const pair<Ts...>& p){
	return os<<"{"<<p.first<<", "<<p.second<<"}";
}
#else
#define dbg(x)
#endif
// === DEBUG MACRO ENDS HERE === //

#define ff first
//#define ss second

const ll sz = 75;
ll ara[sz];

int foo(int* a, int* b)
{
    int sum = *a + *b;
    *b = *a;
    return *a = sum - *b;
}
// C++ program to convert a decimal
// number to binary number



int main()
{
    int n,m,p,q,x,y=1,c;
    string s,s1="";
    ss(s);
    sort(all(s));
    forb(i,s.size())
    {
        if(s[i]==s[i-1])
        {
            s1+=s[i];
        }
        else{
            s1+=s[i];
            break;
        }
    }
    pf(s1);
	return 0;
}





