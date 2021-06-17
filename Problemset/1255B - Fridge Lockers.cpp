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
	// O(n^2)
	int n,m;
	cin>>n>>m;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(m<n || (m==2 and n==2)){
		cout<<-1<<endl;
		return;
	}
	int sum = 0;
	vector<pair<int,int>>res;
	for(int i=1;i<n;i++){
		sum+=arr[i-1]+arr[i];
		res.push_back(make_pair(i,i+1));
	}
	res.push_back(make_pair(n,1));
	sum+=arr[0]+arr[n-1];
	cout<<sum<<endl;
	for(auto& x:res){
		cout<<x.first<<" "<<x.second<<endl;
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
	//  t = 1;
	while(t--)
	{
		// memset(vis,0,sizeof(vis));
		solve();
		// cout<<el;
	}


}


    
