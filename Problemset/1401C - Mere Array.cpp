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
        
		int n;
		cin>>n;
		vector<int>arr(n);
		vector<int>brr(n);
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			brr[i] = arr[i];
		}
		sort(brr.begin(),brr.end());
		int m = brr[0];
		bool flag = true;
		for(int i=0;i<n;i++)
		{
			if(arr[i]!=brr[i] && arr[i]%m!=0)
			{
				flag=false;
				break;
			} 
		} 
		if(flag==true)
		{
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
        cout<<el;
    }


}


    
