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
	int n;
	cin>>n;
	string t,s;
	cin>>t;
	cin>>s;
	int c = 0;
	for(int i=0;i<n;i++){
		if(s[i]=='1'){
			if(i==0){
				if(t[i]=='0'){
					c++;
					t[i]='.';
				}
				else if(t[i+1]=='1'){
					c++;
					t[i+1]='.';
				}
			}
			else if(i==n-1){
				if(t[i]=='0'){
					c++;
					t[i]='.';
				}
				else if(t[i-1]=='1'){
					c++;
					t[i-1]='.';
				}
			}
			else{
				if(t[i-1]=='1'){
					c++;
					t[i-1] = '.';
				}
				else if(t[i]=='0'){
					c++;
					t[i] = '.';
				}
				else if(t[i+1]=='1'){
					c++;
					t[i+1]='.';
					// cout<<1<<endl;
				}
			}
		}
		// cout<<t<<endl;
	}
	cout<<c<<endl;
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


    
