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
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	if(n==1){
		cout<<0<<endl;
		return;
	}
	for(int i=n-2;i>=0;i--){
		a[i] = a[i]+a[i+1];
	}
	for(int i=1;i<n;i++){
		b[i] = b[i]+b[i-1];
	}

	vector<int>res;
	for(int i=0;i<n;i++){
		if(i==0){
			res.push_back(a[i+1]);
		}
		else if(i==n-1){
			res.push_back(b[i-1]);
		}
		else{
			int m = max(a[i+1],b[i-1]);
			res.push_back(m);
		}
	}
	int ans = *min_element(res.begin(),res.end());
	cout<<ans<<endl;
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


    
