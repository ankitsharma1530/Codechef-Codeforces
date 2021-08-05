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
int arr[26];
void solve()
{
	string s;
	cin>>s;
	int n = s.length();
	int i = 0;
	for(char c='a';c<='z';c++){
		arr[i] = c;
		i++;
	}
	int ind = -1;
	i =0;
	for(auto x:s){
		if(x=='a'){
			ind = i;
			break;
		}
		i++;
	}
	if(ind==-1){
		cout<<"NO"<<endl;
		return;
	}
	int h = 1;
	int c = 1;
	int l = ind;
	int r = ind;
	while((l>=0 || r<n) && h<n ){
		int f = 0;
		if(l>0){
			if(s[l-1]==arr[c]){
				// cout<<"a"<<endl;
				l--;
				f=1;
				h++;
			}
		}
		if(f!=1 and r<n-1){
			if(s[r+1]==arr[c]){
				// cout<<"b"<<endl;
				r++;
				f=1;
				h++;
			}
		}
		c++;
		if(f==0){
			cout<<"NO"<<endl;
			return;
		}
	}
	if(h!=n){
		cout<<"NO"<<endl;
	}
	cout<<"YES"<<endl;

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


    
