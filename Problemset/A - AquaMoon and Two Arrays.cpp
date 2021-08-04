#include<bits/stdc++.h>
#define mod 1000000007
#define lli long long int
#define ll long long
#define pll pair<long long,long long>
const int INF = 1000000000;
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
	int n;
	cin>>n;
	int a[n],b[n];
	int s1= 0;
	int s2=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s1+=a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
		s2+=b[i];
	}
	vector<pair<int,int>>pq;
	int c = 0;
	for(int i=0;i<n;i++){
		if(abs(a[i]-b[i])>0){
			pq.push_back({(b[i]-a[i]),i});
			c+=abs(b[i]-a[i]);
		}
	}
	sort(pq.begin(),pq.end());
	int i=0;
	int j = pq.size()-1;
	vector<pair<int,int>>v;
	while(i<j){
		v.push_back({pq[i].second,pq[j].second});
		if(pq[i].first+1<0){
			pq[i].first+=1;
		}
		else if(pq[i].first-1>0){
			pq[i].first-=1;
		}
		else{
			i++;
		}
		if(pq[j].first+1<0){
			pq[j].first+=1;
		}
		else if(pq[j].first-1>0){
			pq[j].first-=1;
		}
		else{
			j--;
		}
	}
	// cout<<v.size()<<endl;
	if(s1!=s2){
		cout<<-1<<endl;
		return;
	}
	cout<<v.size()<<endl;
	for(auto x:v){
		cout<<x.first+1<<" "<<x.second+1<<endl;
	}
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
		// memset(dp,-1,sizeof(dp));
		solve();
		// cout<<el;
	}


}


    
