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
	int arr[4*n];
	for(int i=0;i<4*n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+4*n);
	if(n==1){
		if(arr[0]!=arr[1] or arr[2]!=arr[3]){
			cout<<"NO";
		}	
		else{
			cout<<"YES";
		}
		return;
	}
	int m = 4*n;
	if(arr[0]!=arr[1] or arr[m-1]!=arr[m-2]){
			cout<<"NO";
			// cout<<"1";
			return;
	}	
	int area = 	arr[0]*arr[1]*arr[m-1]*arr[m-2];
	int i=0;
	int j=4*n-1;
	i=i+2;
	j=j-2;
	while(i<j){
		if(arr[i]!=arr[i+1] or arr[j]!=arr[j-1]){
			cout<<"NO";
			// print""
			// cout<<1;
			return;
		}
		if(area!=arr[i]*arr[i+1]*arr[j]*arr[j-1]){
			cout<<"NO";
			// cout<<1;
			return;
		}	
		i=i+2;
		j=j-2;
	}
	cout<<"YES";

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


    
