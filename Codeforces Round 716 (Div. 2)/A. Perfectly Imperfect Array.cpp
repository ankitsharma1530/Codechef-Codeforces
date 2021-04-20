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
	unordered_set<int>s;
	for(int i=1;i<=100;i++)
	{
		s.insert(i*i);
	}	
	int n;
	cin>>n;
	int arr[n];
	bool flag = true;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(s.find(arr[i])==s.end())
		{
			flag=false;
		}
	}
	if(flag==false)
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
	// int t = 1;
	while(t--)
	{
		solve();
		cout<<el;
	}

}


    
