#include<bits/stdc++.h>
#define mod 1000000007
#define lli long long int
#define ll long long
#define pll pair<long long,long long>
#define INF 1000000000;
#define el '\n' 
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;

// for loops shortcut
#define garr(i, n)       for(ll i = 0; i < (n); i++)
#define parr(i, n, arr)       for(ll i = 0; i < (n); i++) cout<<arr[i]<<" ";
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
// int vis[100001];
void solve()
{
	
	// 0 0 0 0 0
	// 0 0 0 0 0
	// 0 0 1 0 0
	// 0 0 0 0 0
	// 0 0 0 0 0
	int n;
		cin >> n;
		vector<int> p(n);
		for (int j = 0; j < n; ++j) {
			cin >> p[j];
			--p[j];
		}
		vector<int> used(n);
		vector<int> ans(n);
		for (int j = 0; j < n; ++j) {
			if (!used[j]) {
				vector<int> cur;
				while(!used[j]) {
					cur.push_back(j);
					used[j] = true;
					j = p[j];
				}
				for(auto e1:cur) {
					ans[e1] = cur.size();
				}
			}
		}
		for(int j = 0; j < n; ++j)
			cout << ans[j] << " ";
	

	
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
	// t = 1;
	while(t--)
	{
		// memset(vis,0,sizeof(vis));
		solve();
		cout<<el;
	}


}


    
