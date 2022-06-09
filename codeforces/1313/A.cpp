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
   int  n,i,p,q,x,y,l,m,r;
   si(n);
   while(n--)
   {
       si(p),si(q),si(r);
       m=0;
       for(i=0;i<3;i++)
       {
           if(i==0)
           {
               if(p)
               {
                   m++;
                   p--;
               }
               if(q)
               {
                   m++;
                   q--;
               }
               if(r)
               {
                   m++;
                   r--;
               }
           }
           else if(i==1)
           {
               if(p>=2)
               {if((p!=0)&&(q!=0))
               {
                   m++;
                   p--;
                   q--;
               }
               if((p!=0)&&(r!=0))
               {
                   m++;
                   p--;
                   r--;
               }
               if((r!=0)&&(q!=0))
               {
                   m++;
                   r--;
                   q--;
               }
               }
               else if(q>=2)
               {
                   if((p!=0)&&(q!=0))
               {
                   m++;
                   p--;
                   q--;
               }
                if((r!=0)&&(q!=0))
               {
                   m++;
                   r--;
                   q--;
               }
                if((p!=0)&&(r!=0))
               {
                   m++;
                   p--;
                   r--;
               }
               }
               else if(r>=2)
               {
                   if((r!=0)&&(q!=0))
               {
                   m++;
                   r--;
                   q--;
               }
                if((p!=0)&&(r!=0))
               {
                   m++;
                   p--;
                   r--;
               }
               if((p!=0)&&(q!=0))
               {
                   m++;
                   p--;
                   q--;
               }
               }
               else{
                  if((r!=0)&&(q!=0))
               {
                   m++;
                   r--;
                   q--;
               }
                if((p!=0)&&(r!=0))
               {
                   m++;
                   p--;
                   r--;
               }
               if((p!=0)&&(q!=0))
               {
                   m++;
                   p--;
                   q--;
               }
               }


           }
           else{
            if((p!=0)&&(q!=0)&&(r!=0))
            {
              m++;
            }
           }
       }
       pf(m);
   }
   return 0;
}


