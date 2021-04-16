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
		   string s;
		   cin>>s;
		   int ct = 0;
		   int cm = 0;
		   for(int i=0;i<s.length();i++)
		   {
			   if(s[i]=='M')
			   {
				   cm++;
			   }
			   else if(s[i]=='T')
			   {
				   ct++;
			   }
		   }
		   if(ct!=cm*2 || s[0]=='M' || s[s.length()-1]=='M')
		   {
			   cout<<"NO";
		   }
		   else{
			   int t =1;
			   int m=0;
			   bool flag=true;

			   for(int i=1;i<s.length();i++)
			   {
				   if(flag==false)
				   {
					   break;
				   }
				   if(s[i]=='T')
				   {
					   t++;
				   }
				   else if(s[i]=='M'){
					   m++;
					   if(m>t)
					   {
						   flag=false;
					   }
				   }
			   }
			   int t1=1;
			   int m1=0;
			   bool f1= true;
			   for(int i=s.length()-2;i>=0;i--)
			   {
				   if(f1==false)
				   {
					   break;
				   }
				   if(s[i]=='T')
				   {
					   t1++;
				   }
				   else if(s[i]=='M'){
					   m1++;
					   if(m1>t1)
					   {
						   f1=false;
					   }
				   }
			   }
			   if(flag==false || f1==false)
			   {
				   cout<<"NO";
			   }
			   else{
				   cout<<"YES";
			   }
		   }
		//    bool flag = true;
		//    int bm = 0;
		//    for(int i=0;i<im;i++)
		//    {
		// 	   if(s[i]=='T')
		// 	   {
		// 		   bm++;
		// 	   }
		//    }
		//    int am = 0;
		//    for(int i=im+1;i<s.length();i++)
		//    {
		// 	   if(s[i]=='T')
		// 	   {
		// 		   am++;
		// 	   }
		//    }
		// 	if(am==cm && bm==cm)
		// 	{
		// 		cout<<"YES";
		// 	}
		// 	else{
		// 		cout<<"NO";
		// 	}
		   cout<<endl;
 
       }
}


    
