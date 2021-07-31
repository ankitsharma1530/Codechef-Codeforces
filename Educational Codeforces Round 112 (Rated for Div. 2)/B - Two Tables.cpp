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
	int W,H;
	cin>>W>>H;
	int x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	int w,h;
	cin>>w>>h;
	int ans = INF;
	if(x2-x1+w<=W){
		ans = min(ans,max(0,w-x1));
		ans = min(ans,max(0,x2-(W-w)));
	}
	if(y2-y1+h<=H){
		ans = min(ans,max(0,h-y1));
		ans = min(ans,max(0,y2-(H-h)));
	}
	if(ans==INF){
		cout<<-1<<endl;
	}
	else{
		cout<<ans<<endl;
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


    
