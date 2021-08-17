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
	int n;
	cin>>n;
	unordered_map<lli,lli>ump;
	for(int i=0;i<n;i++){
		lli a;
		cin>>a;
		ump[a]++;
	}
	int c1 = 0; // 8
	int c2 = 0; // 6
	int c3 = 0; // 4 
	int c4 = 0; // 2
	for(auto x:ump){
		if(x.second>=8){
			c1++;
		}
		else if(x.second>=6){
			c2++;
		}
		else if(x.second>=4){
			c3++;
		}
		else if(x.second>=2){
			c4++;
		}
	}
	int q;
	cin>>q;
	while(q--){
		char c;
		lli t;
		cin>>c>>t;
		if(c=='-'){
			if(ump[t]==8){
				c1--;
				c2++;
			}
			else if(ump[t]==6){
				c2--;
				c3++;
			}
			else if(ump[t]==4){
				c3--;
				c4++;
			}
			else if(ump[t]==2){
				c4--;
			}
			ump[t]--;
		}
		else{
			if(ump[t]==7){
				c1++;
				c2--;
			}
			else if(ump[t]==5){
				c2++;
				c3--;
			}
			else if(ump[t]==3){
				c3++;
				c4--;
			}
			else if(ump[t]==1){
				c4++;
			}
			ump[t]++;
		}
		if(c1>=1){
			cout<<"YES"<<endl;
		}
		else if((c2>=1 and (c1>=1 || c2>=2 || c3>=1 || c4>=1))){
			cout<<"YES"<<endl;
		}
		else if(c3>=2){
			cout<<"YES"<<endl;
		}
		else if(c3>=1 and c4>=2){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
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


    
