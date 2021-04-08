#include <bits/stdc++.h>
#define mod 1000000007
#define pii pair<int,int>
#define vii vector<ii>
#define lli long long int
#define ll long long
#define INF 1000000000;
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
/*
vector<lli>arr;
for(int i=0;i<n;i++)
{
	lli it;
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
		vector<int>arr;
		for(int i=0;i<n;i++)
		{
			int it;
			cin>>it;
			arr.push_back(it);
		}
		lli odd = 0;
		lli even = 0;
		sort(arr.begin(),arr.end(),greater<int>());
		int chance = 0;
		for(int i=0;i<n;i++)
		{
			if(chance%2==0)
			{
			if(arr[i]%2==0)
			{
				even+=arr[i];
			}
			}
			else{
				if(arr[i]%2!=0)
				{
					odd=odd+arr[i];
				}

			}
			chance++;
		}
		if(even==odd)
		{
			cout<<"Tie";
		}
		else if(even>odd)
		{
			cout<<"Alice";
		}
		else 
		{
			cout<<"Bob";
		}
		cout<<endl;
    }
}
