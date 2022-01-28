// #pragma GCC optimize("Ofast,unroll-loops")
// #pragma GCC target("avx,avx2,fma")

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define dd double
#define ld long double
#define sl(n) scanf("%lld", &n)
#define si(n) scanf("%d", &n)
#define sd(n) scanf("%lf", &n)
#define pll pair <ll, ll>
#define pii pair <int, int>
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
#define inf (1LL << 61)
#define loop(i, start, stop, inc) for(ll i = start; i <= stop; i += inc)
#define for1(i, stop) for(ll i = 1; i <= stop; ++i)
#define for0(i, stop) for(ll i = 0; i < stop; ++i)
#define rep1(i, start) for(ll i = start; i >= 1; --i)
#define rep0(i, start) for(ll i = (start-1); i >= 0; --i)
#define ms(n, i) memset(n, i, sizeof(n))
#define casep(n) printf("Case %lld:", ++n)
#define pn printf("\n")
#define pf printf
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
#define ss second

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


void decToBinary(int n)
{
	// array to store binary number
	int binaryNum[32];

	// counter for binary array
	int i = 0;
	while (n > 0) {

		// storing remainder in binary array
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}

	// printing binary array in reverse order
	for (int j = i - 1; j >= 0; j--)
		cout << binaryNum[j];
}

// Driver program to test above function
int main()
{
    int t,i,n,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a,b,m=-1,k=-1;
        vector<int>v1,v2;
        for(i=0;i<n;i++)
        {
            cin>>p;
            v1.pb(p);
            if(p>m)
            {
                a=i;
                m=p;
            }
        }
        for(i=0;i<n;i++)
        {
            cin>>p;
            v2.pb(p);
            if(p>k)
            {
                b=i;
                k=p;
            }
        }
        int y;
        if(k>m){
            for(i=0;i<n;i++)
            {
                if(i!=b)
                {
                    if(v2[i]<v1[i])
                    {
                        y=v2[i];
                        v2[i]=v1[i];
                        v1[i]=y;
                    }
                }
            }
            sort(v1.begin(),v1.end());
            cout<<v1[n-1]*k<<endl;
        }
        else{
           for(i=0;i<n;i++)
            {
                if(i!=a)
                {
                    if(v1[i]<v2[i])
                    {
                        y=v2[i];
                        v2[i]=v1[i];
                        v1[i]=y;
                    }
                }
            }
            sort(v2.begin(),v2.end());
            cout<<v2[n-1]*m<<endl;
        }

    }
	return 0;
}





