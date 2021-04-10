#include <bits/stdc++.h>
#define mod 1000000007
#define pii pair<int,int>
#define vii vector<ii>
#define lli long long int
#define ll long long
#define INF 1000000000;
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
/*
vector<lli>arr;
for(int i=0;i<n;i++)
{
	lli it;
	cin>>it;
	arr.push_back(it);
}
*/
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif



    int t;
    cin>>t;
    while(t--)
    {
		int n;
        cin>>n;
        char dp[n][n];
        pair<int,int>x = {0,0};
        int flag=0;
        pair<int,int>y = {0,0}; 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>dp[i][j];
                if(dp[i][j]=='*' && flag==0)
                {
                    x.first+=i;
                    x.second+=j;
                    flag++;
                }
                else if(dp[i][j]=='*' && flag==1)
                {
                    y.first+=i;
                    y.second+=j;
                }
            }
        }
        if(x.first==y.first)
        {
            if(x.first!=0)
            {
                dp[x.first-1][x.second]='*';
                dp[y.first-1][y.second]='*';
            }
            else{
                dp[x.first+1][x.second]='*';
                dp[y.first+1][y.second]='*';
            }
        }
        else if(x.second==y.second)
        {
            if(x.second!=0)
            {
                dp[x.first][x.second-1]='*';
                dp[y.first][y.second-1]='*';
            }
            else{
                dp[x.first][x.second+1]='*';
                dp[y.first][y.second+1]='*';
            }
        }
        else{
            dp[x.first][y.second] = '*';
            dp[y.first][x.second] = '*';
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<dp[i][j];
            }
            cout<<endl;
        }
    }
}
