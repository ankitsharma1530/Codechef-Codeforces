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
	lli sum = 0 ;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	lli l[n], r[n];
	l[0] = arr[0];
	r[n-1] = arr[n-1];
	for(int i=1;i<n;i++){
		l[i] = max(l[i-1],arr[i]);
	}
	for(int i=n-2;i>=0;i--){
		r[i] = max(r[i+1],arr[i]);
	}

	vector<int>res;
	for(int i=0;i<n;i++){
		lli d = sum-arr[i];
		if(i==0){
			int m = r[i+1];
			if(m*2==d){
				res.push_back(i+1);
			}
		}
		else if(i==n-1){
			lli m = l[i-1];
			if(m*2==d){
				res.push_back(i+1);
			}
		}
		else{
			lli m = max(l[i-1],r[i+1]);
			if(m*2==d){
				res.push_back(i+1);
			}
		}
	}

	if(res.size()==0){
		cout<<0<<endl;
		return;
	}
	cout<<res.size()<<endl;
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
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
	// cin>>t;
	 t = 1;
	while(t--)
	{
		// memset(vis,0,sizeof(vis));
		solve();
		// cout<<el;
	}


}


    
