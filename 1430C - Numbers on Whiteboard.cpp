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
        cout<<2<<endl;
        int k = n-1;
        int n1 = n-1;
        while(k--)
        {
            cout<<n<<" "<<n1;
            int num = (n+n1);
            if(num%2!=0)
            {
                n=(num/2)+1;
            }
            else{
                n=num/2;
            }
            n1--;
            cout<<endl;
        }
    }
    
}
