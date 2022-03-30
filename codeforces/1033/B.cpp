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
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ul;
bool primetest1(ul n)//complexity O(n)
{
    if(n<2)
    {
        return 0;
    }
    else
    {
    for(ul i=2;i<n;i++)
    {
        if((n%i)==0)
        {
           return 0;
        }
    }
    }
    return 1;
}

bool primetest2(ul n)//complexity O(sqrt(n)) ; kono sokhar divisor akti sqrt(n) ar moddhe thakle oprtti ar baire thake;
{
    if(n<2)
    {
        return 0;
    }
    else
    {
    for(ul i=2;i*i<=n;i++)
    {
        if((n%i)==0)
        {
           return 0;
        }
    }
    }
    return 1;
}

int main()
{
    ul b,c,n,m;
    cin>>n;
    while(n--)
    {
        cin>>b>>c;
        m=b+c;
        if(b-c!=1)
        {
              cout<<"NO"<<endl;
              continue;
        }
        c=primetest2(m);
        if(c==0)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
