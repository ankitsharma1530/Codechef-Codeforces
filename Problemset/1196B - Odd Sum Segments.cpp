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
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		int cntodd = 0;
		for (int j = 0; j < n; ++j) {
			cin >> a[j];
			cntodd += a[j] % 2;
		}
		if (cntodd < k || cntodd % 2 != k % 2) {
			cout << "NO" << endl;
			// continue;
			return;
		}
		cout << "YES" << endl;
		for (int j = 0; j < n; ++j) {
			if (k == 1) break;
			if (a[j] % 2 == 1) {
				cout << j + 1 << " ";
				--k;
			}
		}
		cout << n << endl;
	
	


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
	//  t = 1;
	while(t--)
	{
		// memset(vis,0,sizeof(vis));
		solve();
		// cout<<el;
	}


}


    
