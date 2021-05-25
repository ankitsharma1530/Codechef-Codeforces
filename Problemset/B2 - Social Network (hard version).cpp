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
	
	queue<int> q;
	set<int> vals;
	for (int i = 0; i < n; ++i) {
		int id;
		cin >> id;
		if (!vals.count(id)) {
			if (int(q.size()) >= k) {
				int cur = q.front();
				q.pop();
				vals.erase(cur);
			}
			vals.insert(id);
			q.push(id);
		}
	}
	
	vector<int> res;
	while (!q.empty()) {
		res.push_back(q.front());
		q.pop();
	}
	reverse(res.begin(), res.end());
	cout << res.size() << endl;
	for (auto it : res) cout << it << " ";
	// cout << endl;
	
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
	// cin>>t;
	 t = 1;
	while(t--)
	{
		// memset(vis,0,sizeof(vis));
		solve();
		cout<<el;
	}


}


    
