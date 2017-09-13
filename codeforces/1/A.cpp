#include<iostream>
//#define ll long long

using namespace std;

int main()
{
    long long n, m, a;
    cin>>m>>n>>a;
    cout << (( n + a - 1) /a) * ((m + a - 1) / a)<<endl;

    //cin >> a;
    return 0;
}

