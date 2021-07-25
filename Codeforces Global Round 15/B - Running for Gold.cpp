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
bool isbetter(int i,int j,vector<vector<int>>& arr){
    int c = 0;
    for(int ii=0;ii<5;ii++){
        if(arr[j][ii]>arr[i][ii]){
            c++;
        }
    }
    return c>=3;
}
void solve()
{
    int n;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(5));
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<5;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int best = 0; // hypothesis
    for(int i=1;i<n;i++){
        if(isbetter(i,best,arr)){
            best = i;
        }
    }
    bool ok = true;
    for(int i=0;i<n;i++){ // if there is no best player
        if(i==best){
            continue;
        }
        ok&=isbetter(best,i,arr);
    }
    if(!ok){
        best = -2;
    }
    cout<<best+1<<endl;

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


    
