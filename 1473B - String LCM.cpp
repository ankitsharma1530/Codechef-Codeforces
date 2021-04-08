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
		string a,b;
		cin>>a>>b;
 
		int l1=a.size();
		int l2=b.size();
 
		int max = (l1 > l2) ? l1 : l2;
 
		int lcm;
		do
		{
			if (max % l1 == 0 && max % l2 == 0)
			{
				lcm=  max;
				break;
			}
			else
				++max;
		} while (true);
 
		string s1="";
		string s2="";
 
		for (int i = 0; i < lcm/l1; i++)
		{
			s1 +=a;
		}
		for (int i = 0; i < lcm / l2; i++)
		{
			s2 += b;
		}
		if(s1==s2)
		{
			cout<<s1<<"\n";
		}
		else
		{
			cout<<-1<<"\n";
		}
    }
}
