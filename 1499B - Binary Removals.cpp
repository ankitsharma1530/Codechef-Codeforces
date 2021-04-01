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
        string st;
        cin>>st;
        int N = st.size();
        int I=-1,J=-1;
        for(int i=0;i<N-1;i++){
        if(st[i]=='1' and st[i+1]=='1'){
            I=i;
            break;
            }
        }
        for(int i=N-1;i>0;i--){
        if(st[i]=='0' and st[i-1]=='0'){
            J=i;
            break;
            }
        }
 
        if(I!=-1 and J!=-1 and I<J)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    
}
