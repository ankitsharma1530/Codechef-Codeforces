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



void solve()
{
	int n,k;
	cin>>n>>k;
	int count = 0; // number of nobels
	unordered_map<int,int>ump;
	for(int i=0;i<k;i++){
		int x,y;
		cin>>x>>y;
		if(x>y){
			swap(x,y);
		}
		ump[x]++;
		if(ump[x]==1){ // one more nobel got added
			count++;
		}
	}
	int m;
	cin>>m;
	while(m--){
		int t1;
		cin>>t1;
		if(t1==1){
			int x,y;
			cin>>x>>y;
			if(x>y){
				swap(x,y);
			}
			ump[x]++;
			if(ump[x]==1){ // one more nobel got added
				count++;
			}
		}
		else if(t1==2){
			int x,y;
			cin>>x>>y;
			if(x>y){
				swap(x,y);
			}
			ump[x]--;
			if(ump[x]==0){ // one more nobel got added
				count--;
			}
		}
		else{
			// at the time of printing all nobles will die
			cout<<n-count<<endl;
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
	// cin>>t;
	 t = 1;
	while(t--)
	{
		// memset(vis,0,sizeof(vis));
		// memset(dp,-1,sizeof(dp));
		solve();
		// cout<<el;
	}


}


    
