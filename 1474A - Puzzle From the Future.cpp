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
		string s;
		cin>>s;
		vector<char>res(n,'.');
		res[0] = '1';
		for(int i=1;i<s.length();i++)
		{
			res[i]='1';
			if(res[i]+s[i]==res[i-1]+s[i-1])
			{
				res[i]='0';
			}
		}
		for(int i=0;i<res.size();i++)
		{
			cout<<res[i];
		}
		cout<<endl;
    }
}
