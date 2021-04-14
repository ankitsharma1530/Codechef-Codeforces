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
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		long long int sum = 0;
		int i=0;
		// int temp = 0;
		while(i<n)
		{
			if(arr[i]>0)
			{
				sum = sum+arr[i];
			}
			else{
				if(sum>0)
				{
					sum = sum+arr[i];
					if(sum<0)
					{
						sum=0;
					}
				}
			}
			i++;
		}
		cout<<sum;
		cout<<endl;

		
	}
}


    
