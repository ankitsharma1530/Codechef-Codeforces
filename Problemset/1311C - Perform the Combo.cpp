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

void solve()
{
	int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    int arr[m];
    int pre[n+1];
    
    // LINE SWEEP METHOD
    
    memset(pre,0,sizeof(pre));
    for(int i=0;i<m;i++){
        cin>>arr[i];
        pre[arr[i]-1] += 1;
    }
    pre[n-1] +=1;
    for(int i=n-1;i>=0;i--){
        pre[i]+=pre[i+1];
    }
    vector<int>res(26,0);
    for(int i=0;i<n;i++){
        res[s[i]-'a']+=pre[i];
    }
    for(int i=0;i<26;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    
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
		solve();
		// cout<<el;
	}


}


    
