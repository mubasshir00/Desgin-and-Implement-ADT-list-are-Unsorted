#include<bits/stdc++.h>
using namespace std ;

int LCSLength(string x,string y ,int m,int n)
{
    if(m==0||n==0)return 0;
    if(x[m-1]==y[n-1])return LCSLength(x,y,m-1,n-1)+1;
    return max(LCSLength(x,y,m,n-1),LCSLength(x,y,m-1,n));
}
int main()
{
    string x ,y;
    cin>>x>>y;
    cout<<"length of LCS is " <<LCSLength(x,y,x.length(),y.length())<<endl;
}
