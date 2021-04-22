#include <iostream>
using namespace std;
int main(){
	int t,n,m,y,a,b,c,d;
	cin>>t; while(t--){
		cin>>n>>m; y=0;
		while(n--){
			cin>>a>>b>>c>>d;
			if(b==c) y=1;
		}
		if(y&&m%2==0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;	
}
