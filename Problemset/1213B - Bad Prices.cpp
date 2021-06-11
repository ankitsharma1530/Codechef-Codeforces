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
	
	int n;
	cin>>n;
	vector<int>arr;
	for(int i=0;i<n;i++){
		int it;
		cin>>it;
		arr.push_back(it);
	}
	int x = INT_MAX;
	int c=0;
	for(int i=n-1;i>=0;i--){
		x=min(x,arr[i]);
		if(arr[i]>x){
			c++;
		}
	}
	cout<<c;
	


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
		cout<<el;
	}


}


    
