#include<bits/stdc++.h>
using namespace std;

int setBit( int n, int position )
{
    n = n | ( 1 << position );
    return n;
}
int stBit( int n, int position )
{
    n = n & ( 0 << position );
    return n;
}
bool checkBit( int n, int position )
{
    return n & ( 1 << position );
}
int main(void)
{
    int n=1900000,p=0,q;
    cin>>q;
    int prime[100000];
        for( int i = 0; i < n; i ++ )
        {
            prime[i/32] = stBit( prime[i/32], i%32 );
        }
    int x = sqrt( n );
    prime[0] = setBit( prime[0], 0 );
    prime[0] = setBit( prime[0], 1 );
    for( int i = 4; i <= n; i += 2 )
        {
            prime[i/32] = setBit( prime[i/32], i%32 );

        }
    for( int i = 3; i <= x; i += 2 ) {
        if( !checkBit( prime[i/32], i%32 )) {
            for( int j = i+i; j <= n; j += i ){
                prime[j/32] = setBit( prime[j/32], j%32 );
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
       if( !checkBit( prime[i/32], i%32 ) )
        {
            p++;

            cout<<i<<endl;
            if(p==q)
            {
                break;
            }
        }
    }

    return 0;
}


