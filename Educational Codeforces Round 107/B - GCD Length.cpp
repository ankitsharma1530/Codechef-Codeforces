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
     int a,b,c;
	 cin>>a>>b>>c;
	 if(a==b&&b==c)
	 {
		 int n1 = 0;
	 	for(int i=0;i<a;i++)
	 	{
	 		n1 = n1*10+1;
	 	}
	 	cout<<n1<<" "<<c*n1;
	 }
	 else{
		 
		 if(a>b)
		 {
			 int n1 = 1;
		 	 int n2 = 0;
			 for(int i=0;i<a-1;i++)
			 {
				 n1 = n1*10+0; 
			 }
			 for(int i=0;i<b-c+1;i++)
			 {
				 n2 = n2*10+1;
			 }
			 int x = c-1;
			 while(x--)
			 {
				 n2=n2*10+0;
			 }
			 cout<<n1<<" "<<n2;
		 }
		 else{
			 int n1 = 1;
		 	 int n2 = 0;
			 for(int i=0;i<a-1;i++)
			 {
				 n1 = n1*10+0; 
			 }
			 for(int i=0;i<b-c+1;i++)
			 {
				 n2 = n2*10+1;
			 }
			 int x = c-1;
			 while(x--)
			 {
				 n2=n2*10+0;
			 }
			 cout<<n1<<" "<<n2;
		 }
	 }

		
	 	cout<<endl;
	 } 
	
}


    
