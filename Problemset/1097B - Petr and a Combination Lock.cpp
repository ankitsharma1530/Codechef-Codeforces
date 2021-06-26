
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define vi vector<ll>
#define vc vector<char>
#define vvi vector<vector<ll>>
#define MAX 1e10
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define MIN -1e10
#define s(a) sort(a.begin(),a.end())
#define pq priority_queue<ll>
#define npq priority_queue<ll, vector<ll>, greater<ll>>
bool poss;
void solve(vi& arr,ll i,ll sum) {
	if(i==arr.size()) {
		if(sum%360==0) poss=1;
		return;
	}
	solve(arr,i+1,(sum+arr[i]));
	solve(arr,i+1,(sum-arr[i]));
}
void abcd() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	poss=false;
	cin>>n;
	vi arr(n);
	for(ll i=0;i<n;i++) cin>>arr[i];
	solve(arr,0,0);
	if(poss) cout<<"YES";
	else cout<<"NO";
}
int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	abcd();
	cout<<endl;
}
