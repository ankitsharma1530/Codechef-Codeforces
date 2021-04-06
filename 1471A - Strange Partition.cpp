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
       long long int n,k;
       cin>>n>>k;
       vector<long long int>arr;
       long long int sum = 0;
       for(int i=0;i<n;i++)
       {
           long long int it;
           cin>>it;
           sum=sum+it;
           arr.push_back(it);
       }
    //    cout<<sum<<endl;
        long long int m1 =0;
        long long int m2 =0;
        if(sum%k==0)
        {
            m1=sum/k;
        }
        else{
            m1=(sum/k)+1;
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]%k==0)
            {
                m2=m2+(arr[i]/k);
            }
            else{
                m2=m2+(arr[i]/k)+1;
            }
        }
        long long int ans1 = min(m1,m2);
        long long int ans2 = max(m1,m2);
        cout<<ans1<<" "<<ans2;
       cout<<endl;
    }
}
