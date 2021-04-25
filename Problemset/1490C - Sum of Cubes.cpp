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
	lli n;
	cin>>n;
	if(n==1)
	{
		cout<<"NO";
	}
	else{
		bool flag = false;
		for(lli i=1;i<=cbrt(n);i++)
		{
			if(flag==true)
			{
				break;
			}
			lli j = cbrt(n-pow(i,3));
			if(j*j*j+i*i*i==n && j!=0)
			{
				// cout<<i<<" "<<j;
				flag=true;
			}
		}
		if(flag==false)
		{
			cout<<"NO";
		}
		else{
			cout<<"YES";
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


    
