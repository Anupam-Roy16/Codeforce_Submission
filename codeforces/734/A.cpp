
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d\n",&n);
    string a;
    cin>>a;
    int c=0,d=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='A')
        {
            c++;
        }
        else{
                d++;

        }
    }
    if(c>d)
    {
        cout<<"Anton"<<"\n";
    }
    else if(d>c)
    {
        cout<<"Danik"<<"\n";
    }
    else{
        cout<<"Friendship"<<"\n";
    }
    return 0;
}
