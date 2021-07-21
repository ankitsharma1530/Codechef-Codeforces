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
	priority_queue<pair<int, int>> q;
    int n;
    cin >> n;
    map<int, int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v[x]++;
    }
    for (auto x : v) {
        q.push({x.second, x.first});
    }
    int sz = n;
    while (q.size() >= 2) {
        auto cnt1 = q.top();
        q.pop();
        auto cnt2 = q.top();
        q.pop();
        cnt1.first--;
        cnt2.first--;
        sz -= 2;
        if (cnt1.first) {
            q.push({cnt1.first, cnt1.second});
        }
        if (cnt2.first) {
            q.push({cnt2.first, cnt2.second});
        }
    }
    cout << sz << "\n";
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


    
