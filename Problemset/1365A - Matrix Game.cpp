#include <bits/stdc++.h>
#define mod 1000000007
#define lli long long int
#define ll long long
#define pll pair<long long,long long>
#define INF 1000000000;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
/*
vector<ll>arr;
for(int i=0;i<n;i++)
{
	ll it;
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
		int n,m;
		cin>>n>>m;
		int arr[n][m] ; 
		vector<bool>r(n,false);
		vector<bool>c(m,false);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>arr[i][j];
				if(arr[i][j]==1)
				{
				r[i] = true;
				c[j] = true;
				}
			}
		}
		int count = 0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(arr[i][j]==0 && r[i]==false && c[j]==false)
				{
					arr[i][j] = 1;
					r[i] = true;
					c[j] = true;
					count++;
				}
			}
		}
		if(count%2!=0)
		{
			cout<<"Ashish";
		}
		else{
			cout<<"Vivek";
		}
		cout<<endl;
		
	}
}


    
