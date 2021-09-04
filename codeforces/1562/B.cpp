#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,c,d,r,s,t,p,q;
    cin>>t;
    while(t--)
    {
        cin>>p;
        string s;
        cin>>s;
        q=0;
        for(i=0;i<p;i++)
        {
            if((s[i]=='1')||(s[i]=='4')||(s[i]=='6')||(s[i]=='8')||(s[i]=='9'))
            {
                q++;
                cout<<"1"<<endl<<s[i]<<endl;
                break;
            }
        }
        if(q==0)
        {
            for(i=0;i<p-1;i++)
            {
                r=0;
                for(j=i+1;j<p;j++)
                {
                    if((s[i]=='2')&&(s[j]=='2'))
                    {
                        r++;
                        cout<<"2"<<endl<<"22"<<endl;
                        break;
                    }
                    else if((s[i]=='3')&&(s[j]=='2'))
                    {
                         r++;
                        cout<<"2"<<endl<<"32"<<endl;
                        break;

                    }
                    else if((s[i]=='2')&&(s[j]=='5'))
                    {
                         r++;
                        cout<<"2"<<endl<<"25"<<endl;
                        break;

                    }
                    else if((s[i]=='5')&&(s[j]=='2'))
                    {
                         r++;
                        cout<<"2"<<endl<<"52"<<endl;
                        break;

                    }
                    else if((s[i]=='2')&&(s[j]=='7'))
                    {
                         r++;
                        cout<<"2"<<endl<<"27"<<endl;
                        break;

                    }
                    else if((s[i]=='7')&&(s[j]=='2'))
                    {
                         r++;
                        cout<<"2"<<endl<<"72"<<endl;
                        break;

                    }
                    else if((s[i]=='3')&&(s[j]=='3'))
                    {
                         r++;
                        cout<<"2"<<endl<<"33"<<endl;
                        break;

                    }
                    else if((s[i]=='3')&&(s[j]=='5'))
                    {
                         r++;
                        cout<<"2"<<endl<<"35"<<endl;
                        break;

                    }
                    else if((s[i]=='5')&&(s[j]=='5'))
                    {
                         r++;
                        cout<<"2"<<endl<<"55"<<endl;
                        break;

                    }
                    else if((s[i]=='7')&&(s[j]=='5'))
                    {
                         r++;
                        cout<<"2"<<endl<<"75"<<endl;
                        break;

                    }
                    else if((s[i]=='7')&&(s[j]=='7'))
                    {
                         r++;
                        cout<<"2"<<endl<<"77"<<endl;
                        break;

                    }
                    else if((s[i]=='5')&&(s[j]=='7'))
                    {
                         r++;
                        cout<<"2"<<endl<<"57"<<endl;
                        break;

                    }
                }
                if(r==1)
                {
                    break;
                }
            }
        }
    }
    return 0;
}
