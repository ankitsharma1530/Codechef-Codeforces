#include<bits/stdc++.h>
#define mod 1000000007
#define lli long long int
#define ll long long
#define pll pair<long long,long long>
#define INF 1000000000;
#define el '\n' 
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;

// for loops shortcut
#define garr(i, n)       for(ll i = 0; i < (n); i++)
#define parr(i, n, arr)       for(ll i = 0; i < (n); i++) cout<<arr[i]<<" ";
/*
vector<ll>arr;
for(int i=0;i<n;i++)
{
	ll it;
	cin>>it;
	arr.push_back(it);
}
*/
/*
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}
*/
using namespace std;

void solve()
{
	string s;
    cin>>s;
    unordered_map<char,int>ump;
    for(auto x:s){
        ump[x]++;
    }
    unordered_set<char>a;
    unordered_set<char>b;
    // unordered_set<char>p;
    for(auto x:ump){
        if(x.second>=2){
            a.insert(x.first);
            b.insert(x.first);
        }
        else{
            if(a.size()>b.size()){
                b.insert(x.first);
            }
            else if(a.size()<=b.size()){
                a.insert(x.first);
            }
        }
    }
    cout<<min(a.size(),b.size())<<endl;
    return;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	
	int t;
	cin>>t;
	//  t = 1;
	while(t--)
	{
		// memset(vis,0,sizeof(vis));
		solve();
		// cout<<el;
	}


}


    
