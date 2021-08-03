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
	string s;
	cin>>s;
	int ind1 = s.length()-1;
	int ind2 = s.length()-1;
	int a = 0;
	int nb = 5;
	int b = 0;
	int na = 5;
	// when first player win
	for(int i=0;i<s.length();i++){
		if(i&1){
			if(s[i]=='1'){
				a--;
			}
			nb--;
		}
		else{
			if(s[i]=='1' || s[i]=='?'){
				a++;
			}
		}
		if(a>nb){
			ind1 = i;
			break;
		}
	}
	//when second player will win
	for(int i=0;i<s.length();i++){
		if(i&1){
			if(s[i]=='1' || s[i]=='?'){
				b++;
			}
		}
		else{
			if(s[i]=='1'){
				b--;
			}
			na--;
		}
		if(b>na){
			ind2 = i;
			break;
		}
	}
	cout<<min(ind1,ind2)+1<<endl;
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


    
