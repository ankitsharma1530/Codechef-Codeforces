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
using namespace std;
// int vis[100001];
void solve()
{
	
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	if(k==0){
		cout<<s;
	}
	else if(n==1){
		cout<<"0";
	}
	else{
		// int i=0;
		if(s[0]!='1'){
			s[0]='1';
			k-=1;
		}
		for(int i=1;i<n;i++){
			// cout<<k<<" ";
			if(k<=0){
				break;
			}
			if(s[i]=='0'){
				// cout<<"b"<<" ";
				continue;
			}
			else{
				s[i]='0';
				// cout<<"a"<<" ";
				k-=1;
			}
		}
		cout<<s;
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
		solve();
		cout<<el;
	}


}


    
