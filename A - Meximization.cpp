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
        sort(arr.begin(),arr.end());
        int prev = arr[0];
        cout<<arr[0]<<" ";
        vector<int>temp;
        for(int i=1;i<n;i++)
        {
            if(arr[i]==prev)
            {
                temp.push_back(arr[i]);
            }
            else{

            cout<<arr[i]<<" ";
            prev=arr[i];
            }       
        }
        if(temp.size()>0)
        {
            for(int i=0;i<temp.size();i++)
            {
                cout<<temp[i]<<" ";
            }
        }

        cout<<endl;
    }
    
}
