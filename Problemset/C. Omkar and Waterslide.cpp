#include<bits/stdc++.h>
using namespace std;
long long t,ans,a[200005],k,n;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(k=1;k<=n;k++){
			cin>>a[k];
		}ans=0;
		for(k=n;k>=1;k--){
			ans+=max(0ll,a[k-1]-a[k]);
		}
		cout<<ans<<endl;
	}
}
