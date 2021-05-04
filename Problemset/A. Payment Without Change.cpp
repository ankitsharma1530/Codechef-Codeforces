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
	
	// 0 0 0 0 0
	// 0 0 0 0 0
	// 0 0 1 0 0
	// 0 0 0 0 0
	// 0 0 0 0 0
	
	// a , number of a, b , S
	ll a,b,n,s;
	cin>>a>>b>>n>>s;
	
	if(n>s)
	{
		if(b>=s)
		{
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	}
	else if(n==s)
	{
		cout<<"YES";
	}
	else{
	ll sum = 0;
	int x = s/n;
	if(x>a)
	{
		sum+=(a*n);
	}
	else{
		sum+=(x*n);
	}
	if(sum==s)
	{
		cout<<"YES";
	}
	else{
		if(b>=s-sum)
		{
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
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
	cin>>t;
	//  int t = 1;
	while(t--)
	{
		solve();
		cout<<el;
	}


}


    
