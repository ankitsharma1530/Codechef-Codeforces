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
        long long int n ;
        cin>>n;
        vector<long long int>res;
        res.push_back(20);
        res.push_back(36);
        res.push_back(51);
        res.push_back(60);
        if(n<=4)
        {
            cout<<res[n-1];
        }
        else{
            long long int ans=0;
            long long int t = n%4;
            if(t==0){
                ans = 44*(n/4);
                ans=ans+16;
            }
            else{
                ans = 44*(n/4);
                ans=ans+4*(4-t);
                ans=ans+res[t-1];
            }
            cout<<ans;
        }
        cout<<endl;
        
        
    }
    
}
