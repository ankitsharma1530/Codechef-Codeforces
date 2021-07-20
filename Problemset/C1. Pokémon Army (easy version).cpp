#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,q,a[300005];int dp[300005][2];
int32_t main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>q;
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=1;i<=n;i++){
			dp[i][1]=max(dp[i-1][1],dp[i-1][0]+a[i]);
			dp[i][0]=max(dp[i-1][0],dp[i-1][1]-a[i]);
		}
		cout<<max(dp[n][0],dp[n][1])<<endl;
	}
	return 0;
}
