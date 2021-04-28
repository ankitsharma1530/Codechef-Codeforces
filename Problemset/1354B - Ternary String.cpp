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

void solve()
{
	
	string s;
	cin>>s;
	int len = 2000010, a[4] = {0};
	for(int i=0; i<s.length(); i++)
	{
		a[s[i]-'0'] = i+1;
		if(a[1]&&a[2]&&a[3])
		len = min(len, max({abs(a[1]-a[2]),abs(a[2]-a[3]),abs(a[3]-a[1])})+1);
	}
	cout <<(len<2000010?len:0);
	
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
	//  int t = 1;
	while(t--)
	{
		solve();
		cout<<el;
	}


}


    
