#include <bits/stdc++.h>
#define mod 1000000007
#define lli long long int
#define ll long long
#define pll pair<long long,long long>
#define INF 1000000000;
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
	while(t--)
	{
		lli a,b,x,y,n;
		cin>>a>>b>>x>>y>>n;
		
		cout<<min(max(x,a-n)*max(y,b-(n-a+(max(x,a-n)))),max(y,b-n)*max(x,a-(n-b+(max(y,b-n)))))<<endl;


		
	}
}


    
