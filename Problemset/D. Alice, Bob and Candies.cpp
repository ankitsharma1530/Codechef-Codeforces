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

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int i=1;
	int j = n-1;
	int s1 = arr[0];
	int s2 = 0;
	int x = 0;
	int temp = arr[0];
	int count = 1;
	while(i<=j)
	{
		if(x&1)
		{
			int t = 0;
			while(t<=temp && i<=j)
			{
				s1+=arr[i];
				t+=arr[i];
				i++;
			}
			// cout<<t<<" "<<'1'<<endl;
			temp = t;
		}
		else{
			int t = 0;
			while(t<=temp && j>=i)
			{
				s2+=arr[j];
				t+=arr[j];
				j--;
			}
			temp = t;
			// cout<<t<<" "<<'2'<<endl;
		}
	x++;
	count++;
	}
	cout<<count<<" "<<s1<<" "<<s2; 


	
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


    
