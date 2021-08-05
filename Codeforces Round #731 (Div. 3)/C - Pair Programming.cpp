#include<bits/stdc++.h>
#define mod 1000000007
#define lli long long int
#define ll long long
#define pll pair<long long,long long>
const int INF = 1000000000;
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
/*
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
*/
using namespace std;
int arr[26];
void solve()
{
	int n,m,k;
	cin>>n>>m>>k;
	int a[m],b[k];
	// vector<int>res;
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	for(int i=0;i<k;i++){
		cin>>b[i];
	}
	int pos1 = 0, pos2 = 0;
	vector<int>res;
	while(pos1!=m || pos2!=k){
		if (pos1 != m && a[pos1] == 0) {
			res.push_back(0);
			n++;
			pos1++;
		} else if (pos2 != k && b[pos2] == 0) {
			res.push_back(0);
			n++;
			pos2++;
		} else if (pos1 != m && a[pos1] <= n) {
			res.push_back(a[pos1++]);
		} else if (pos2 != k && b[pos2] <= n) {
			res.push_back(b[pos2++]);
		} else {
			cout << -1 << '\n';
			// ok = false;
			// break;
			return;
		}
	}
	for(auto x:res){
		cout<<x<<" ";
	}
	cout<<endl;


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
		// memset(dp,-1,sizeof(dp));
		solve();
		// cout<<el;
	}


}


    
