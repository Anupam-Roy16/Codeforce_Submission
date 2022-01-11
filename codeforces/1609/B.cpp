#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,r,p,i,q=0;
    cin>>n>>m;
    string s;
    char c;
    cin>>s;
    for(i=0;i<n-2;)
    {
        if((s[i]=='a')&&(s[i+1]=='b')&&(s[i+2]=='c'))
        {
            q++;
            i+=3;
        }
        else{
            i++;
        }
    }
    while(m--)
    {
        cin>>r>>c;
        if(s[r-1]!=c)
        {
            if(s[r-1]=='a')
            {
                if((r-1+2)<n)
                {
                    if((s[r]=='b')&&(s[r+1]=='c'))
                        {
                            q--;
                            s[r-1]=c;
                        }
                }
            }
            else if(s[r-1]=='b')
            {
                if(((r-2)>=0)&&(r<n))
                {
                    if((s[r-2]=='a')&&(s[r]=='c'))
                        {
                            q--;
                            s[r-1]=c;
                        }
                        }
                }

            else if(s[r-1]=='c'){
                if((r-3)>=0)
                {
                    if((s[r-2]=='b')&&(s[r-3]=='a'))
                        {
                            q--;
                            s[r-1]=c;
                        }
                }
                }


               s[r-1]=c;
                if(s[r-1]=='a')
            {
                if((r-1+2)<n)
                {
                    if((s[r]=='b')&&(s[r+1]=='c'))
                        {
                            q++;
                           // s[r-1]=c;
                        }
                }
            }
            else if(s[r-1]=='b')
            {
                if(((r-2)>=0)&&(r<n))
                {
                    if((s[r-2]=='a')&&(s[r]=='c'))
                        {
                            q++;
                            //s[r-1]=c;
                        }
                        }
                }

            else if(s[r-1]=='c'){
                if((r-3)>=0)
                {
                    if((s[r-2]=='b')&&(s[r-3]=='a'))
                        {
                            q++;
                            //s[r-1]=c;
                        }
                }
                }
        }
            cout<<q<<endl;
        }
    }


