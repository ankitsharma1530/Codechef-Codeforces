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

	int n1,m1,k;
	cin>>n1>>m1>>k;
	int s =  0;
	int  n = max(n1,m1);
	int m = min(n1,m1);
	for(int i=1;i<n;i++)
	{
		s+=1;
	}
	// cout<<s<<el;
	s=  s+n*(m-1);
	
	int s1 =  0;
	for(int i=1;i<m;i++)
	{
		s1+=1;
	}
	// cout<<s<<el;
	s1=  s1+m*(n-1);
	// cout<<s<<el;
	if(s==k || s1==k)
	{
		cout<<"YES";
	}
	else{
		cout<<"NO";
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


    
