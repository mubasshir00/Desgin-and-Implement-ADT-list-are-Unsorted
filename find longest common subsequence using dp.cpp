#include<bits/stdc++.h>
using namespace std ;
#define MAX 20
int lookup[MAX][MAX];
string lcs(string x,string y ,int m,int n)
{
    if(m==0 || n==0)
        return string("") ;
        if(x[m-1] == y[n-1])
        {
            return lcs(x,y,m-1,n-1)+x[m-1];
        }
        if(lookup[m-1][n]>lookup[m][n-1])
            return lcs(x,y,m-1,n);
        else
            return lcs(x,y,m,n-1);

}
void lcslength(string x,string y,int m,int n)
{
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(x[i-1]==y[j-1])
                lookup[i][j]=lookup[i-1][j-1]+1;
            else
                lookup[i][j]=max(lookup[i-1][j],lookup[i][j-1]);
        }
    }
}





int main()
{
    string x ="XMJYAUZ";
    string y = "MZJAWXU";
    int m =x.length();
    int n = y.length();
    lcslength(x,y,m,n);
    cout<<lcs(x,y,m,n);

    return 0;
}
