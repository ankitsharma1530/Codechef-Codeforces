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
        int c0=0;
        int c1=0;
        int c2=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%3==0)
            {
                c0++;
            }
            else if(arr[i]%3==1)
            {
                c1++;
            }
            else{
                c2++;
            }
        }
        if(c1==c2 && c2==c0)
        {
            cout<<0;
        }
        else{
            int num = n/3;
            vector<int>temp;
            temp.push_back(c0);
            temp.push_back(c1);
            temp.push_back(c2);
            int count = 0;
            while(true)
            {
                if(temp[0]==temp[1] && temp[1]==temp[2])
                {
                    break;
                }
                if(temp[0]>num)
                {
                    temp[0]--;
                    temp[1]++;
                }
                else if(temp[1]>num)
                {
                    temp[1]--;
                    temp[2]++;
                }
                else{
                    temp[2]--;
                    temp[0]++;
                }
                count++;
            }
            cout<<count;
        }
        cout<<endl;
    }
    
}
