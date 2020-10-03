#include<bits/stdc++.h>
using namespace std;
unsigned long long printNcR(unsigned long long n, unsigned long long r)
{

    // p holds the value of n*(n-1)*(n-2)...,
    // k holds the value of r*(r-1)...
    unsigned long long p = 1, k = 1;

    // C(n, r) == C(n, n-r),
    // choosing the smaller value
    if (n - r < r)
        r = n - r;

    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;

            // gcd of p, k
            long long m = __gcd(p, k);

            // dividing by gcd, to simplify product
            // division by their gcd saves from the overflow
            p /= m;
            k /= m;

            n--;
            r--;
        }

        // k should be simplified to 1
        // as C(n, r) is a natural number
        // (denominator should be 1 ) .
    }

    else
        p = 1;

    return p;
    // if our approach is correct p = ans and k =1
}
/*unsigned long long f(unsigned long long n)
{
    if(n==1)
    {
        return 1;
    }
    else{
        return n*f(n-1);
    }
}*/
int main()
{

    unsigned long long t,q=0,b,c;
    int i,j;
    cin>>t;
    char a[t][t];
    for(i=0;i<t;i++)
    {
        unsigned long long p=0;
        for(j=0;j<t;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='C')
            {
                p++;
            }
        }

        b=printNcR(p,2);
       
        q+=b;
    }

    for(i=0;i<t;i++)
    {
        unsigned long long p=0;
        for(j=0;j<t;j++)
        {
            if(a[j][i]=='C')
            {
                p++;
            }

        }
        b=printNcR(p,2);
        q+=b;
    }

    cout<<q<<endl;
    return 0;
}
