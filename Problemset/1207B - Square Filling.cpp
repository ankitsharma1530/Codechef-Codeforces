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
	int n,m;
	cin>>n>>m;
	int a[n][m];
	int b[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			b[i][j] =  0;
		}
	}
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==1){
				if(i+1<n and j+1<m){
					if(a[i][j]==1 and a[i+1][j]==1 and a[i][j+1]==1 and a[i+1][j+1]==1)
					{
						b[i][j]=1;
						b[i][j+1]=1;
						b[i+1][j]=1;
						b[i+1][j+1]=1;
						v.push_back(make_pair(i,j));
					}
					
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]!=b[i][j]){
				cout<<-1<<endl;
				return;
			}
		}
	}
	cout<<v.size()<<endl;
	for(auto x:v){
		cout<<x.first+1<<" "<<x.second+1<<endl;
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
		// cout<<el;
	}


}


    
