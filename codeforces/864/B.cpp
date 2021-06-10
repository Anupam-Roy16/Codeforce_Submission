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
	int i,q=0,r,m;
	cin>>m;
	string s;
	cin>>s;
	r=INT_MIN;
	vector<int>p;
    for(i=0;i<m;i++)
    {
        if((s[i]>='A')&&(s[i]<='Z'))
        {
            q++;
            sort(p.begin(),p.end());
	        int n = unique( p.begin(), p.end() ) - p.begin();
	        if(r<n)
            {
                r=n;
            }
            p.clear();
        }
        else{
            p.push_back(s[i]);
        }
    }
    if((q==0)||((s[m-1]>='a')&&(s[m-1]<='z')))
    {
       sort(p.begin(),p.end());
       int n= unique( p.begin(), p.end() ) - p.begin();
       if(r<n)
            {
                r=n;
            }
            p.clear();
    }
    cout<<r<<endl;
    return 0;
}


