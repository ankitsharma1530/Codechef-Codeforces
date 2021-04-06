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
       int n;
       cin>>n;
       string res;
       if(n==1)
       {
           res = "9";
       }
       else if(n==2)
       {
           res = "98";
       }
       else if(n==3)
       {
           res = "989";
       }
       else{
        int num =0;
        res = "989";
        n=n-3;
       while(n--)
       {
           res=res+to_string(num);
           if(num==9)
           {
               num=0;
           }
           else{
               num++;
           }
       }
       }
       cout<<res;
       cout<<endl;
    }
}
