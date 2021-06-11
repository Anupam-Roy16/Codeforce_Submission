#include<bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
	fastIO();
	unsigned long long  n,p=0;
	int i;
	cin>>n;
	for(i=1;;i++)
    {        
        p+=i;
        if(p>=n)
        {
            break;
        }
    }
    p-=n;
    cout<<i-p<<endl;

}


