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
        long long int n;
        cin>>n;
        long long int a[n];
        for(long long int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
 
        long long int x,y,z;
        x=a[0]*a[1]*a[n-1]*a[n-2]*a[n-3];
        y=a[0]*a[1]*a[2]*a[3]*a[n-1];
        z=a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n-5];
 
        cout<<max(x,max(y,z))<<el;
        
    }


}


    
