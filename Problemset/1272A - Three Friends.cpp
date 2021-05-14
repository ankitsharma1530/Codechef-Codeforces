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
int calc(int a, int b, int c) {
	return abs(a - b) + abs(a - c) + abs(b - c);
}
void solve()
{
	
	// 0 0 0 0 0
	// 0 0 0 0 0
	// 0 0 1 0 0
	// 0 0 0 0 0
	// 0 0 0 0 0
	int a, b, c;
	cin >> a >> b >> c;
	int ans = calc(a, b, c);
	for (int da = -1; da <= 1; ++da) {
		for (int db = -1; db <= 1; ++db) {
			for (int dc = -1; dc <= 1; ++dc) {
				int na = a + da;
				int nb = b + db;
				int nc = c + dc;
				ans = min(ans, calc(na, nb, nc));
			}
		}
	}
	cout << ans ;
	
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
		solve();
		cout<<el;
	}


}


    
