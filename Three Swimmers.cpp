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
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;

using namespace std;
int main()
{
  //
  //  
  //
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--)
  {
    long long int p,a,b,c;
    cin>>p>>a>>b>>c;
    long long int m1 = p%a;
    long long int m11,m22,m33;
    if(m1!=0)
    {
        m11 = a-p%a;
    }
    else{
      m11=0;
    }
    long long int m2 = p%b;
    if(m2!=0)
    {
        m22 = b-p%b;
    }
    else{
      m22=0;
    }
    long long int m3 = p%c;
    if(m3!=0)
    {
        m33 = c-p%c;
    }
    else{
      m33=0;
    }
    long long int ans = min({m11,m22,m33});
    cout<<ans<<endl;

  }
  
  
  
  
  //
  //
  //
   return 0;
}
