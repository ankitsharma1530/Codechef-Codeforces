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
	// stack
	string s;
	cin>>s;
	stack<char>st;
	// int m_count = 0;
	int s_dec = 0;
	for(auto x:s){
		if(st.empty()){
			st.push(x);
		}
		else{
			if(x=='s'){
				if(st.top()=='m'){
					st.pop();
					s_dec++;
				}
			}
			else if(x=='m'){
				if(st.top()=='s'){
					st.pop();
					s_dec++;
				}
			}
		}
	}
	int s_count = 0;
	int m_count = 0;
	for(auto x:s){
		if(x=='s'){
			s_count++;
		}
		else{
			m_count++;
		}
	}
	s_count-=s_dec;
	if(m_count>s_count){
		cout<<"mongooses"<<endl;
		return;
	}
	if(m_count==s_count){
		cout<<"tie"<<endl;
		return;
	}
	cout<<"snakes"<<endl;
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


    
