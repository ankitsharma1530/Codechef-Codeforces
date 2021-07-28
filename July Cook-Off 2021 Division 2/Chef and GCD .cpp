#include<bits/stdc++.h>
#define mod 1000000007
#define lli long long int
#define ll long long
#define pll pair<long long,long long>
#define INF 1000000000;
#define el '\n' 
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
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
	lli x,y;
	cin>>x>>y;
	int c = 0;
	if(__gcd(x,y)==1){
	if(__gcd(x+1,y)>1 || __gcd(x,y+1)>1){
		cout<<1<<endl;
	}
	else{
		cout<<2<<endl;
	}
	return;
	}
	cout<<0<<endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	int t ;
    cin>>t;
	while(t--)
	{
		solve();
		// cout<<el;
	}

}


    
