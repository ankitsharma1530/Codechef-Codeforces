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
int dp[1001][1001];
int dfs(vector<int>& arr,int ind,int h,int k,int n,vector<int>temp){
	if(ind>=n){
		return temp.size();
	}
	// if(h==k){
	// 	if(temp.back()!=arr[ind]){
	// 		return temp.size();
	// 	}
	// }
	if(dp[ind][temp.size()]!=-1){
		return dp[h][temp.size()];
	}
	int ans;
	if(temp.back()!=arr[ind]){
		ans = (dfs(arr,ind+1,h,k,n,temp));
		if(h<k){
		temp.push_back(arr[ind]);
		ans = max(ans,dfs(arr,ind+1,h+1,k,n,temp));
		}
	}
	else{
		temp.push_back(arr[ind]);
		ans = dfs(arr,ind+1,h,k,n,temp);
	}
	return dp[h][temp.size()]= ans;

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
		memset(dp,-1,sizeof(dp));
     		int n,k;
     	cin>>n>>k;
     	vector<int>arr;
     	for(int i=0;i<n;i++){
     		int it;
     		cin>>it;
     		arr.push_back(it);
     	}
     	int res = 0;
     	
     	for(int i=0;i<n;i++){
     		vector<int>temp;
     		temp.push_back(arr[i]);
     		res = max(res,dfs(arr,i+1,0,k,n,temp));
     	}
     	cout<<res<<endl;
// 		solve();
		// cout<<el;
	}


}


    


    
