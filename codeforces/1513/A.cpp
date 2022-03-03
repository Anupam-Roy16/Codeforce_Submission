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
	int i,a,x,y,p,j;
	int n;
	si(n);
	while(n--)
    {
        si(x),si(y);
        p=x;
        p-=3;
        p/=2;
        p++;
        if(y==0)
        {
            for(i=1;i<=x;i++)
            {
                cout<<i;
                if(i==x)cout<<el;
                else cout<<" ";
            }
        }
        else if((x==1)||(x==2))pf(-1);
        else if(y>p)pf(-1);
        else{
            cout<<"1";
            for(i=0,j=2;i<y;j+=2,i++)
            {
                cout<<" "<<j+1<<" "<<j;
            }
            j--;
            //pf(j);
            if(j!=x)
            {
                cout<<" ";
                for(i=j+1;i<=x;i++)
                {
                     cout<<i;
                     if(i==x)cout<<el;
                     else cout<<" ";
                }
            }
            else{cout<<el;}
        }
    }
}
