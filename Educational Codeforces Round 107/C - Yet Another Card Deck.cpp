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

    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     // int a,b,c;
	// 	// cin>>a>>b>>c;
	// 	// if(a==b && b==c)
	// 	// {
	// 	// 	int n1 = 0;
	// 	// 	for(int i=0;i<a;i++)
	// 	// 	{
	// 	// 		n1 = n1*10+1;
	// 	// 	}
	// 	// 	cout<<n1<<" "<<n2;
	// 	// }
	// 	// else{

	// 	// }

		
	// 	cout<<endl;
	// } 
	int n,k;
	cin>>n>>k;
	deque<int>dq;
	for(int i=0;i<n;i++)
	{
		int it;
		cin>>it;
		dq.push_back(it);
	}
	vector<int>arr;
	for(int i=0;i<k;i++)
	{
		int it;
		cin>>it;
		arr.push_back(it);
	}
	for(int i=0;i<k;i++)
	{
		int ind = 0;
		int val = 0;
		bool flag= true;
		for(int j=0;j<n;j++)
		{
			if(flag==false)
			{
				break;
			}
			if(dq[j]==arr[i])
			{
				ind = j;
				val = arr[i];
				flag=false;
			}
		}
		cout<<ind+1<<" ";
		dq.erase(dq.begin()+ind);
		dq.push_front(arr[i]);
	}
	cout<<endl;
}


    
