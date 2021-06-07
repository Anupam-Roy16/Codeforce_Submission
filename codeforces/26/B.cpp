#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,w=0;
    string sp;
    cin>>sp;
    stack<char>s;
    for(j=0;j<sp.size();j++)
    {
        if(sp[j]==')')
        {
            if(s.empty()==0)
               {

            if(s.top()=='(')
                {
                    s.pop();
                     w++;
                }
               }
               else{
                 s.push(sp[j]);
               }
        }
        else{
        s.push(sp[j]);
        }
    }
    w*=2;
    cout<<w<<endl;
    return 0;
}

/*int main()
{
    int j,w=0;
    string sp;
    cin>>sp;
    stack<char>s;
    for(j=0;j<sp.size();j++)
    {
        if(sp[j]==')')
        {
            if(s.empty()==1)
            {
                w++;
                cout<<"NO"<<endl;
                break;
             }
            else{
                if(s.top()=='(')
                {
                    s.pop();
                }
                else{
                        w++;
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
        else{
        s.push(sp[j]);
        }
    }
    if(s.size()!=0)
    {
        cout<<"NO"<<endl;
    }
    else if(w==0){
        cout<<"YES"<<endl;
    }

    return 0;
}*/
