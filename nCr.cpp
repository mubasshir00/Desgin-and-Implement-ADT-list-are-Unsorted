#include<bits/stdc++.h>
using namespace std ;
long long dp[101][103];
long long mod = 1e9+7;

long long f(int n, int r)
{

    if(dp[n][r]!=-1)return dp[n][r];


    if(n==r)return dp[n][r] = 1;


    if(r==0) return dp[n][r] = 1;


    long long res = (f(n-1,r-1)+f(n-1,r));

    return dp[n][r] = res;
}
int main()
{
 memset(dp,-1,sizeof(dp));
int n,r;
while(cin>>n>>r && n!=0 && r!=0){

 cout<<n<<" things taken "<<r<<" at a time is "<< f(n,r)<<" exactly."<<endl;
}
    return 0 ;
}
