#include <bits/stdc++.h>
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
	lli x;
	cin>>x;
	// 1 + (1+2+3) + (1+2+3+4+5+6+7) 
	int i=3;
	lli n = 3;
	// lli p = 1;
	x--;
	lli count = 1;
	bool flag = true;
	while(flag)
	{
		if(((n*(n+1))/2)>x)
		{
			flag=false;
		}
		else{
			count++;
			x-=((n*(n+1))/2);
			// p = n;
			n=pow(2,i)-1;
			i++;
		}
	}
	cout<<count;
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
	// int t = 1;
	while(t--)
	{
		solve();
		cout<<el;
	}

}


    
