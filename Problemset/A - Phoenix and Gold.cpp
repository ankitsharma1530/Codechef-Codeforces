#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		vector<int> a;
		int s=0,z;
		for(int i=0;i<n;i++){
			cin>>z;
			s+=z;
			a.push_back(z);
		}
		if(s==x){
			cout<<"NO"<<endl;
			continue;
		}
		int g=0;
		for(int i=0;i<n;i++){
			g+=a[i];
			if(g==x){
				swap(a[i],a[i+1]);
			}
		}
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
