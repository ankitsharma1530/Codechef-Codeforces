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
bool cmp(pair<int,int>& a,pair<int,int>& b){
	if(a.first==b.first){
		return a.second<b.second;
	}
	return a.first<b.first;
}
void solve()
{
	int n;
    cin>>n;
    vector<pair<int,int>>arr;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		arr.push_back(make_pair(a,b));
	}
	sort(arr.begin(),arr.end(),cmp);
	int x = 0;
	int y = 0;
	string res = "";
	for(auto& temp:arr){
		if(temp.first<x || temp.second<y){
			cout<<"NO"<<endl;
			return;
		}
		int dx = temp.first-x;
		int dy = temp.second-y;
		while(dx--){
			res+="R";
		}
		while(dy--){
			res+="U";
		}
		x = temp.first;
		y = temp.second;
	}
	cout<<"YES"<<endl;
	cout<<res<<endl;
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


    
