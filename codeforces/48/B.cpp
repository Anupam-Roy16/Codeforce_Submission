#include<bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    int j,n,m,i,w,p,q,x,y;
    cin>>n>>m;
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>p>>q;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {

            if(a[i][j]==0)
            {

                w=0;
                if((i+p-1<n)&&(j+q-1<m))
                {
                    for(x=i;x<i+p;x++)
                    {
                        for(y=j;y<j+q;y++)
                        {
                            if(a[x][y]==1)
                            {
                                w++;
                            }
                        }
                    }
                   //cout<<w<<"a1"<<endl;
                    v.push_back(w);
                    w=0;
                }

                if((i+q-1<n)&&(j+p-1)<m)
                {
                    for(x=i;x<i+q;x++)
                    {
                        for(y=j;y<j+p;y++)
                        {
                            if(a[x][y]==1)
                            {
                              w++;
                            }
                        }
                    }
                    // cout<<w<<"b1"<<endl;
                     v.push_back(w);
                w=0;
                }

                if((i+p-1<n)&&(j-q+1>=0))
                {
                    for(x=i;x<i+p;x++)
                    {
                        for(y=j;y>j-q;y--)
                        {
                            if(a[x][y]==1)
                            {
                                w++;
                            }
                        }
                    }
                     v.push_back(w);
                w=0;
                }
                // cout<<i+q-1<<" "<<j-p+1<<endl;
                if((i+q-1<n)&&(j-p+1)>=0)
                {
                    //cout<<"wdk";
                    for(x=i;x<i+q;x++)
                    {
                        for(y=j;y>j-p;y--)
                        {
                            if(a[x][y]==1)
                            {
                                 w++;
                            }
                        }
                    }
                //     cout<<w<<"d1"<<endl;
                      v.push_back(w);
                w=0;
                }
                if((i-p+1>=0)&&(j+q-1<m))
                {
                    for(x=i;x>i-p;x--)
                    {
                        for(y=j;y<j+q;y++)
                        {
                            if(a[x][y]==1)
                            {
                                w++;
                            }
                        }
                    }
                  // cout<<w<<"a"<<endl;
                    v.push_back(w);
                    w=0;
                }

                if((i-q+1>=0)&&(j+p-1)<m)
                {
                    for(x=i;x>i-q;x--)
                    {
                        for(y=j;y<j+p;y++)
                        {
                            if(a[x][y]==1)
                            {
                              w++;
                            }
                        }
                    }
                    // cout<<w<<"b"<<endl;
                     v.push_back(w);
                w=0;
                }

                if((i-p+1>=0)&&(j-q+1>=0))
                {
                    for(x=i;x>i-p;x--)
                    {
                        for(y=j;y>j-q;y--)
                        {
                            if(a[x][y]==1)
                            {
                                w++;
                            }
                        }
                    }
                  // cout<<w<<"c"<<endl;
                    v.push_back(w);
                w=0;
                }
               //  cout<<i+q-1<<" "<<j-p+1<<endl;
                if((i-q+1>=0)&&(j-p+1)>=0)
                {
                   // cout<<"wdk";
                    for(x=i;x>i-q;x--)
                    {
                        for(y=j;y>j-p;y--)
                        {
                            if(a[x][y]==1)
                            {
                                 w++;
                            }
                        }
                    }
                   //  cout<<w<<"d"<<endl;
                      v.push_back(w);
                w=0;
                }

            }
        }
    }
    if(v.size()==0)
    {
        cout<<p*q<<endl;
        return 0;
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;

}


