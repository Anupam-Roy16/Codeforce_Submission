#include<bits/stdc++.h>
using namespace std;
int main()
{
  int p,d,a[4],m,b;
  cin>>a[0]>>a[1]>>a[2]>>a[3]>>m>>b;
  sort(a,a+4);
if((a[0]==m)||(a[0]<m))
{
cout<<"0"<<endl;
}
else{
d=b-m+1;
p=a[0]-m;
if(p>d)
{
cout<<d<<endl;
}
else{
cout<<p<<endl;
}

}
}