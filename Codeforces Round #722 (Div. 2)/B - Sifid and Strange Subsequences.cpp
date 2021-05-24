#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int mod=1000000007;
mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n;
    cin>>n;
    int arr[n];
    // int ans=0;
    int count=0;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]<=0)count++;
      else mini=min(mini,arr[i]);
    }
    sort(arr,arr+n);
    int mindiff=INT_MAX-1;
    for(int i=0;i<n;i++){
      if(i+1<n and arr[i+1]<=0){
          mindiff=min(mindiff,arr[i+1]-arr[i]);
          // maxneg=max(maxneg,arr[i]);
          // maxneg=max(maxneg,arr[i+1]);
      }
    }

    int ans=count;
    if(mindiff>=mini)ans++;
    // cout<<an/
    cout<<ans;
    cout<<endl;
}
int32_t main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      // srand(time(0));
      int t;
      cin>>t;
        // t=1;
      while(t--){
        // cout<<"Case #"<<tt<<": ";
            solve();
            // tt++;
      }
      return 0;
}
