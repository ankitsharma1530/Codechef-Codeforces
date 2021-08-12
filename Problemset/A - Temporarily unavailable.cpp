#include<bits/stdc++.h>
#define mod 1000000007
#define lli long long int
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
	int n,m,x,r;
  cin>>n>>m>>x>>r;
  if(n>m){
    swap(n,m);
  }
  int ans ;
  int lr = x-r;
  int rr = x+r;
  if(x>n and x<m){
    // middle
    // ans = (abs(rr-lr)>=abs(m-n))?0:(m-n)-(rr-lr);
    if(rr>=m){
      rr = m;
    }
    if(lr<=n){
      lr = n;
    }
    ans = (abs(rr-lr)>=abs(m-n))?0:(m-n)-(rr-lr);
  }
  else if(x<=n){
    // left
    ans = (rr>=n)?m-n-(rr-n):m-n;
  }
  else if(x>=m){
    // right
    ans = (lr<=m)?m-n-(m-lr):m-n;
  }
  if(ans<0){
    ans = 0;
  }
  cout<<ans<<endl;
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


    
