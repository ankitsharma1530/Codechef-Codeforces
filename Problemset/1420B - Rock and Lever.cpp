#include<bits/stdc++.h>
#define mod 1000000007
#define lli long long int
#define ll long long
#define pll pair<long long,long long>
#define INF 1000000000;
#define el '\n' 
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
lli left(int num)
{
	lli c =0;
	while(num>0)
	{
		num = num>>1;
		c++;
	}
	return c;
}
void solve()
{
	lli n;
	cin>>n;
	lli arr[n];
	for(lli i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(n==1)
	{
		cout<<0;
	}
	else{
		unordered_map<lli,lli>ump;
		for(int i=0;i<n;i++)
		{
			lli x = left(arr[i]);
			ump[x]++;
		}
		lli ans = 0;
		for(auto it=ump.begin();it!=ump.end();it++)
		{
			if(it->second>1)
			{
				ans+=(it->second*(it->second-1)/2);
			}
		}
		cout<<ans;
	}
}

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
	// int t = 1;
	while(t--)
	{
		solve();
		cout<<el;
	}

}


    
