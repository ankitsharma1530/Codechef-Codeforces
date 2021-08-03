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
bool dfs(string t, string s,int ind,int i,bool isright){
	if(ind>=t.length()){
		return true;
	}
	if(i<0 || i>=s.length()){
		return false;
	}
	if(t[ind]!=s[i]){
		return false;
	}
	if(isright){
			if(dfs(t,s,ind+1,i+1,true)){
				return true;
			}
		
	}
		if(dfs(t,s,ind+1,i-1,false)){
			return true;
		}
	
	return false;
}
void solve()
{
	string s,t;
	cin>>s;
	cin>>t;
	bool flag = false;
	for(int i=0;i<s.length();i++){
		if(t[0]==s[i]){
			if(dfs(t,s,0,i,true)){
			cout<<"YES"<<endl;
			return;
			}
		}
	}
		cout<<"NO"<<endl;
	
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


    
