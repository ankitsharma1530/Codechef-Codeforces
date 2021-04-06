#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define pii pair<int,int>
#define vii vector<ii>
#define lli long long int
#define ll long 
#define INF 1000000000;
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      long long n,x,i,j=1,s=0;
	cin>>n>>x;
	long long a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;a[i]%j==0;i=i%n)
	{   
	    s=s+a[i];
		if(i+1==n) j=j*x;
		i++;
	}
    cout<<s<<endl;
    }
}
