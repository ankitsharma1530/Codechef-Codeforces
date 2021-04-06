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
       unordered_set<int>st;
       for(int i=0;i<n;i++)
       {
           if(st.find(arr[i])!=st.end())
           {
               if(st.find(arr[i]+1)==st.end())
               {
                   st.insert(arr[i]+1);
               }
           }
           else
           {
               st.insert(arr[i]);
           }
       }
       cout<<st.size();
       cout<<endl;
    }
}
