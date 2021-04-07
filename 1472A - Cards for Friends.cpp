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
      int w,h,n;
	  cin>>w>>h>>n;
	  
	  if(n==1)
	  {
		  cout<<"YES";
	  }
	  else{
		  int sum = 1;
		  
		  if(w%2==0)
		  {
			  
			//   int count =0 ;
			  while(w%2==0)
			  {
				  sum*=2;
				  w=w/2;
				  
			  }
			  
		  }
		  if(h%2==0)
		  {
			  
			//   int count =0 ;
			  while(h%2==0)
			  {
				  sum*=2;
				  h=h/2;
				  
			  }
			//   sum=sum+count;
		  } 
		  
		  if(sum>=n)
	  {
		  cout<<"YES";
	  }
	  else{
		  cout<<"NO";
	  } 
	  }
	  
	  cout<<endl;
    }
}
