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
        int n,k;
		cin>>n>>k;
		int arr[n];
		vector<int>res;
		int c = 1; // white
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]*2<k)
			{
				res.push_back(1);
			}
			else if(arr[i]*2>k)
			{
				res.push_back(0);
			}
			else
			{
				if(c==0)
				{
					res.push_back(0);
					c=1;
				}
				else {
					res.push_back(1);
					c=0;
				}
			}
			
		}
		for(int i=0;i<res.size();i++)
		{
			cout<<res[i]<<" ";
		}


        cout<<el;
    }


}


    
