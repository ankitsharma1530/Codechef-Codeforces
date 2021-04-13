#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define pii pair<int,int>
#define vii vector<ii>
#define lli long long int
#define ll long 
#define INF 1000000000;
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define endl '\n'
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
    lli t;
    cin>>t;
    while(t--)
    {
		lli n,m,k;
		cin>>n>>m>>k;
		double arr[n+1][m+1];
		for(auto i=0;i<=n;i++)
		{
			for(auto j=0;j<=m;j++)
			{
				if(i==0 || j==0)
				{
					arr[i][j]=0;
				}
				else{
					cin>>arr[i][j];
				}
			}
		}
		for(auto i=0;i<=n;i++)
		{
			double pre = 0;
			for(auto j=0;j<=m;j++)
			{
				arr[i][j]+=pre;
				pre=arr[i][j];
			}
		}
		for(auto i=0;i<=m;i++)
		{
			double pre = 0;
			for(auto j=0;j<=n;j++)
			{
				arr[j][i]+=pre;
				pre=arr[j][i];
			}
		}
		lli min_ele = min(m,n);
		lli ans = 0;
		for(auto x=1;x<=min_ele;x++)
		{
			for(auto i=x;i<=n;i++)
			{
				for(auto j=x;j<=m;j++)
				{
					if((arr[i][j]+arr[i-x][j-x]-arr[i][j-x]-arr[i-x][j])/(x*x)>=k)
					{
						ans++;
					}
				}
			}
		}
		cout<<ans;
		cout<<endl;
    }
}
