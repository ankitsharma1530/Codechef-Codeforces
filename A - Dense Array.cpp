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
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            int it;
            cin>>it;
            arr.push_back(it);
        }
        int count= 0;
        for(int i=0;i<n-1;i++)
        {
            int m1 = min(arr[i],arr[i+1]);
            int m2 = max(arr[i],arr[i+1]);
            if(m1*2<m2)
            {
                while(m1<m2)
                {
                    m1=m1*2;
                    count++;
                }
                count--;
            }
        }
        cout<<count;
        cout<<endl;
    }
    
}
