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
           int n,x,y;
           cin>>n>>x>>y;
 
           int p=y-x;
           int diff=-1;
           int num=0;
           for(int i=n-1;i>=0;i--)
           {
               if(p%i==0)
               {
                   diff=p/i;
                   num=i-1;
                   break;
               }
 
           }
           if(diff==-1)
           {
               diff=y-x;
           }
           n=n-2;
               n=n-num;
              // cout<<n<<endl;
               vector<int> vec;
               for(int i=x;i<=y;i+=diff)
               {
                   vec.push_back(i);
               }
               int i=x;
               while(n>0&&i>0)
               {
                   i=i-diff;
                   if(i>0)
                   {
                     vec.push_back(i);
                     n--;
                   }
 
               }
               i=y;
               while(n>0)
               {
                   i+=diff;
                   vec.push_back(i);
                   n--;
 
               }
               for(int i=0;i<vec.size();i++)
               {
                   cout<<vec[i]<<" ";
               }
               cout<<endl;
 
 
 
 
 
       }
}


    
