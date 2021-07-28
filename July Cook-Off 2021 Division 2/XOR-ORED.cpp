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
/*
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
*/
using namespace std;
void solve()
{
	int n;
	cin>>n;
	lli arr[n];
	// lli m = INT_MIN;
	unordered_map<int,int>ump;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		// m = max(m,arr[i]);
		ump[arr[i]]++;
	}
	int ans = -1;
	int c = 0;
	for(auto x:ump){
		if(x.second>c){
			ans = x.first;
			c = x.second;
		}
		else if(x.second==c){
			ans = max(ans,x.first);
		}
	}
	int x = 0;
	for(int i=0;i<n;i++){
		x = x|(arr[i]^ans);
	}
	cout<<ans<<" "<<x<<endl;
	
	
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


    
