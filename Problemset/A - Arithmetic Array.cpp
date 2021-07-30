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
bool static cmp(pair<int,int>&a , pair<int,int>& b){
	if(a.first<b.first){
		return true;
	}
	else if(a.first==b.first){
		if(a.second<b.second){
			return true;
		}
		return false;
	}
	return false;
}
void solve()
{
	int n;
	cin>>n;
	int arr[n];
	int s = 0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		s+=arr[i];
	}
	if(s==n){
		cout<<0<<endl;
	}
	else{
		if(s<n){
			cout<<1<<endl;
		}
		else{
			cout<<s-n<<endl;
		}
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
		// memset(dp,-1,sizeof(dp));
		solve();
		// cout<<el;
	}


}


    
