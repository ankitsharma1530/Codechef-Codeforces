// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n,m;
// 		cin>>n>>m;
// 		if(n==0 || m==0)
// 		{
// 			cout <<0;
// 			continue;
// 		}

// 		vector<vector<char>> mat1(n,vector<char> (m));
// 		vector<vector<char>> mat2(n,vector<char> (m));

// 		for(int i=0;i<n;i++)
// 			for(int j=0;j<m;j++)
// 				{
// 					cin>>mat1[i][j];
// 					mat2[i][j]=mat1[i][j];
// 				}

// 		int row_max=0;
// 		int r=0;
// 		int col_max=0;
// 		for(int i=0;i<n;i++)
// 		{
// 			int temp=0;
// 			for(int j=0;j<m;j++)
// 				if(mat1[i][j]=='*')
// 					temp++;
// 			if(temp>row_max)
// 			{
// 				row_max=temp;
// 				r=i;
// 			}
// 		}
// 		for(int i=0;i<m;i++)
// 			mat1[r][i]='*';
// 		for(int i=0;i<m;i++)
// 		{
// 			int temp=0;
// 			for(int j=0;j<n;j++)
// 				if(mat1[j][i]=='*')
// 					temp++;
// 			col_max=max(col_max,temp);
// 		}

// 		int ans1=(m-row_max)+(n-col_max);

// 		row_max=0;
// 		r=0;
// 		col_max=0;
// 		for(int i=0;i<m;i++)
// 		{
// 			int temp=0;
// 			for(int j=0;j<n;j++)
// 				if(mat2[j][i]=='*')
// 					temp++;
// 			if(temp>=col_max)
// 			{
// 				col_max=temp;
// 				r=i;
// 			}
// 		}
// 		for(int i=0;i<n;i++)
// 			mat2[i][r]='*';
// 		for(int i=0;i<n;i++)
// 		{
// 			int temp=0;
// 			for(int j=0;j<m;j++)
// 				if(mat2[i][j]=='*')
// 					temp++;
// 			row_max=max(row_max,temp);
// 		}
// 		int ans2=(m-row_max)+(n-col_max);
// 		int ans=min(ans1,ans2);

// 		cout<<ans<<endl;
// 	}
// 	return 0;

// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// 	int tt;
// 	cin>>tt;
// 	while(tt--)
// 	{
// 		string s,t,p;
// 		cin>>s>>t>>p;
// 		vector<int> arr(26,0);
// 		vector<int> arrp(26,0);
// 		int j_t=0;
// 		if(s==t)
// 		{
// 			cout<<"YES"<<endl;
// 			continue;
// 		}
// 		for(int i=0;i<p.length();i++)
// 		{
// 			arrp[p[i]-'a']++;
// 		}
		
// 		int i=0;
// 		int j;
// 		for(;i<s.length();i++)
// 		{
// 			j=j_t;
// 			for(;j<t.length();j++)
// 			{
// 				if(s[i]==t[j])
// 				{
// 					j_t=j+1;
// 					break;
// 				}
// 				else
// 				{
// 					arr[t[j]-'a']++;
// 				}
// 			}
// 			if(j==t.length())
// 			{
// 				cout<<"NO"<<endl;
// 				break;
// 			}
// 		}
// 		if(i!=s.length())
// 			continue;
// 		j=j_t;
// 		for(;j<t.length();j++)
// 		{
// 			// cout<<j;	
// 			arr[t[j]-'a']++;
// 		}
// 		// for(int i=0;i<26;i++)
// 		// 	cout<<arrp[i]<<" ";
// 		// cout<<endl;
// 		// for(int i=0;i<26;i++)
// 		// 	cout<<arr[i]<<" ";
// 		// cout<<endl;
// 		i=0;
// 		for(;i<26;i++)
// 		{
// 			if(arrp[i]<arr[i])
// 			{
// 				cout<<"NO"<<endl;
// 				break;
// 			}
// 		}
// 		if(i==26)
// 			cout<<"YES"<<endl;

// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n,m;
// 		cin>>n>>m;
		
// 		vector<vector<char>> mat(n,vector<char> (m));
		
// 		for(int i=0;i<n;i++)
// 			for(int j=0;j<m;j++)
// 				{
// 					cin>>mat[i][j];
// 				}

// 		vector<int> row(n,0);
// 		vector<int> col(m,0);
// 		for(int i=0;i<n;i++)
// 			for(int j=0;j<m;j++)
// 				if(mat[i][j]=='.')
// 				{
// 					row[i]++;
// 					col[j]++;
// 				}
// 		int ans=INT_MAX;
// 		for(int i=0;i<n;i++)
// 			for(int j=0;j<m;j++)
// 			{
// 				int temp=row[i]+col[j];
// 				if(mat[i][j]=='.')
// 					temp--;
// 				ans=min(ans,temp);
// 			}
// 		cout<<ans<<endl;
// 	}
// 	return 0;

// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n,k;
// 		cin>>n>>k;
// 		if(k%3!=0)
// 		{
// 			if(n%3==0)
// 				cout<<"Bob"<<endl;
// 			else
// 				cout<<"Alice"<<endl;
// 		}
// 		else
// 		{
// 			int np=n%(k+1);
// 			if(np%3==0 && np!=k)
// 				cout<<"Bob"<<endl;
// 			else
// 				cout<<"Alice"<<endl;
// 		}
// 	}
// 	return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
	
// 	int n;
// 	cin>>n;
// 	vector<int> arr(n);
// 	for(int i=0;i<n;i++)
// 		cin>>arr[i];
// 	vector<vector<int>> vec(2*n,vector<int>(64,0));
// 	for(int i=0;i<n;i++)
// 	{
// 		int j=0;
// 		int num=arr[i];
// 		while(num>0)
// 		{
// 			vec[i][j]=num%10;
// 			num/=10;
// 			j+=2;
// 		}
// 	}
// 	for(int i=0;i<n;i++)
// 	{
// 		int j=1;
// 		int num=arr[i];
// 		while(num>0)
// 		{
// 			vec[i+n][j]=num%10;
// 			num/=10;
// 			j+=2;
// 		}
// 	}
// 	for(int i=0;i<2*n;i++)
// 	{
// 		for(int j=0;j<32;j++)
// 			{
// 				vec[i][j]*=(n);
// 			}
		
// 	}
// 	int car=0;
// 	vector<int> ans(64,0);
// 	for(int j=0;j<32;j++)
// 	{
// 		int temp=0;
// 		for(int i=0;i<2*n;i++)
// 			temp+=vec[i][j];
// 		temp+=car;
// 		car=temp/10;
// 		ans[j]=temp%10;
// 	}
// 	int outtt=0;
// 	for(int j=31;j>=0;j--)
// 	{
// 		outtt=10*outtt+ans[j];
// 		if(outtt>998244353)
// 			outtt%=998244353;
// 	}
// 	cout<<outtt;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int n,m,a,b;
// 	cin>>n>>m>>a>>b;
// 	int g,x,y,z;
// 	cin>>g>>x>>y>>z;
// 	vector<vector<int>> mat(n,vector<int> (m));
	


// }


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	long long n,m,k;
// 	cin>>n>>m>>k;
// 	vector<long long> inp(m);
// 	for(long long i=0;i<m;i++)
// 		cin>>inp[i];
// 	sort(inp.begin(),inp.end());

// 	long long ans=0;
// 	long long en=k;
// 	long long st=0;
// 	while(true)
// 	{
// 		auto it=upper_bound(inp.begin(),inp.end(),en);
// 		long long len=it-inp.begin();

// 		len-=st;

// 		if(len!=0)
// 		{
// 			ans++;
// 			en+=len;
// 			st+=len;
// 		}
// 		else
// 		{
// 			long long temp=*it-en;
// 			temp--;
// 			temp/=k;
// 			en+=(temp+1)*k;
// 		}
// 		if(st>=m)
// 			break;
// 	}
// 	cout<<ans;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int n,b,a;
// 	cin>>n>>b>>a;
// 	int maxx=a;
// 	vector<int> vec(n);
// 	for(int i=0;i<n;i++)
// 		cin>>vec[i];
// 	int i=0;
// 	for(i=0;i<n;i++)
// 	{
// 		if(a==0 && b==0)
// 			break;
// 		if(vec[i]==0)
// 		{
// 			if(a!=0)
// 				a--;
// 			else
// 				b--;
// 		}
// 		else
// 		{
// 			if(a!=maxx && b!=0)
// 			{
// 				b--;
// 				a++;
// 			}
// 			else
// 				a--;
// 		}
// 	}
// 	cout<<i;
// }	

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int n;
// 	cin>>n;
// 	map<int,int> lang;

// 	for(int i=0;i<n;i++)
// 	{
// 		int temp;
// 		cin>>temp;
// 		lang[temp]++;;
// 	}

// 	int m;
// 	cin>>m;
// 	vector<int> first1(m);

// 	for(int i=0;i<m;i++)
// 	{
// 		cin>>first1[i];
// 		// lang1[first[i]]++;
// 	}

// 	vector<int> second1(m);

// 	for(int i=0;i<m;i++)
// 	{
// 		cin>>second1[i];
// 		// lang[second[i]]++;
// 	}
// 	// auto it=lang.begin();	
// 	int ans=0;
// 	pair<int,int> try1={lang[first1[0]],lang[second1[0]]};
// 	for(int i=1;i<m;i++)
// 	{
// 		if(make_pair(lang[first1[i]],lang[second1[i]])>try1)
// 		{
// 			try1={lang[first1[i]],lang[second1[i]]};
// 			ans=i;
// 		}
// 	}
// 	cout<<ans+1;	
// }

// -1 -1 -1 -1 -1 3 -1 8 -1 7 7 -1 2 -1 8 7 2 7 -1 -1 12 -1 12 6 -1 -1 

// #include <bits/stdc++.h>
// using namespace std;

// void dfs(vector<vector<int>> &graph,vector<bool> &vis,int node)
// {
// 	if(vis[node])
// 		return;
// 	vis[node]=true;
// 	for(int i=0;i<graph[node].size();i++)
// 		if(!vis[graph[node][i]])
// 			dfs(graph,vis,graph[node][i]);
// 	return
// }

// int main()
// {
// 	int n,m;
// 	cin>>n>>m;
// 	vector<vector<int> > graph(n+1,vector<int>());
// 	vector<int> temp;
// 	for(int k=0;k<m;k++)
// 	{
// 		int a;
// 		cin>>a;
// 		if(a==0)
// 			continue;
// 		temp.resize(a);
// 		for(int i=0;i<a;i++)
// 			cin>>temp[i];
// 		for(int i=0;i<a;i++)
// 		{
// 			for(int j=i+1;j<a;j++)
// 			{
// 				graph[temp[i]].push_back(temp[j]);
// 				graph[temp[j]].push_back(temp[i]);
// 			}
// 		}
// 	}	
	
// 	vector<int> ans(n+1,-1);
// 	vector<bool> vis(n+1,false);
// 	for(int i=1;i<=n;i++)
// 		if(ans[i]==-1)
// 		{
// 			vis.clear();
// 			vis.resize(n+1,false);
// 			dfs(graph,vis,i);
// 			int aa=0;
// 			for(int j=1;j<=n;j++)
// 				if(vis[j])
// 					aa++;
// 			for(int j=1;j<=n;j++)
// 				if(vis[j])
// 					ans[j]=aa;
// 		}
// 	for(int i=1;i<=n;i++)
// 		cout<<ans[i]<<" ";


// // }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	long long n;
// 	cin>>n;
// 	long long summ=0;
// 	vector<pair<long long,long long>> vec(n);
// 	for(long long i=0;i<n;i++)
// 		{
// 			long long temp;
// 			cin>>temp;
// 			vec[i]={temp,i};
// 			summ+=temp;
// 		}
// 	long long alice=vec[0].first;
// 	long long cop=vec[0].first;
// 	sort(vec.begin(),vec.end(),greater<pair<long long,long long>>());
// 	if(alice>(summ/2))
// 	{
// 		cout<<1<<endl;
// 		cout<<1;
// 		return 0;
// 	}
// 	long long k=n-1;
// 	long long cn=0;
// 	while(alice<(summ/2)+1 && k>0)
// 	{
// 		if(cop<2*vec[k].first)
// 		{
// 			cout<<0;
// 			return 0;
// 		}
// 		alice+=vec[k].first;
// 		k--;
// 		cn++;
// 	}
// 	cout<<cn+1<<endl;
// 	cout<<1<<" ";
// 	for(long long i=k+1;i<n;i++)
// 		cout<<vec[i].second+1<<" ";


// 	return 0;

// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	string inp;
// 	cin>>inp;
// 	int l=inp.length();
// 	long long left=0;
// 	long long right=0;
// 	long long ans=0;
// 	vector<long long> lef(l,0);
// 	vector<long long> rig(l,0);
// 	for(int i=0;i<l;i++)
// 	{

// 		if(inp[i]=='v')
// 			right++;
// 		else
// 		{
// 			if(right!=0)
// 			{	
// 				left+=right-1;
// 				lef[i]=left;
// 				right=0;
// 			}
// 			else
// 				lef[i]=left;


// 		}
// 	}
// 	left=0;right=0;
// 	for(int i=l-1;i>=0;i--)
// 	{

// 		if(inp[i]=='v')
// 			right++;
// 		else
// 		{
// 			if(right!=0)
// 			{	
// 				left+=right-1;
// 				rig[i]=left;
// 				right=0;
// 			}
// 			else
// 				rig[i]=left;
// 		}
// 	}

// 	for(int i=0;i<l;i++)
// 		ans+=lef[i]*rig[i];

// 	cout<<ans;
	
	

// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// 	int n;
// 	cin>>n;
// 	string s;
// 	cin>>s;
// 	int m;
// 	cin>>m;
// 	vector<string> arr(m);
// 	for(int i=0;i<m;i++)
// 		cin>>arr[i];
// 	// cout<<"A"<<endl;
// 	vector<vector<int>> mat(26,vector<int>(s.length(),0));
// 	// cout<<"A"<<endl;
// 	mat[s[0]-'a'][0]=1;
// 	// cout<<"A"<<endl;
// 	for(int i=1;i<s.length();i++)
// 	{
// 		for(int j=0;j<26;j++)
// 			mat[j][i]=mat[j][i-1];
	
// 		mat[s[i]-'a'][i]=mat[s[i]-'a'][i-1]+1;

// 	}

// 	for(int i=0;i<m;i++)
// 	{
// 		int total=arr[i].length();
// 		string t=arr[i];

// 		vector<vector<int>> matt(26,vector<int>(total,0));

// 		// for(int j=0;j<total;j++)
// 		// 	mp[arr[i][j]]++;

// 		matt[t[0]-'a'][0]=1;
// 		for(int k=1;k<total;k++)
// 		{
// 			for(int j=0;j<26;j++)
// 				matt[j][k]=matt[j][k-1];
	
// 			matt[t[k]-'a'][k]=matt[t[k]-'a'][k-1]+1;
// 		}

// 		int ans=0;
// 		for(int k=0;k<26;k++)
// 		{
// 			// char c=(*it).first;
// 			int count=matt[k][total-1];

// 			if(count==0)
// 				continue;

// 			// vector<int> temp=mat[k];
// 			auto itt=lower_bound(mat[k].begin()+ans,mat[k].end(),count);
// 			ans=itt-mat[k].begin();

// 		}
// 		cout<<ans+1<<endl;

// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int n,m;
// 	cin>>n>>m;
// 	vector<pair<int,pair<int,int>>> inp;
// 	vector<int> vec(n,0);
// 	for(int i=0;i<m;i++)
// 	{
// 		int t,l,r;
// 		cin>>t>>l>>r;
// 		inp.push_back({t,{l,r}});
// 	}
// 	for(int i=0;i<m;i++)
// 	{
// 		// int flag=0;
// 		if(inp[i].first==1)
// 		{
// 			for(int j=inp[i].second.first;j<inp[i].second.second;j++)
// 			{
// 				vec[j-1]=1;;
// 			}
// 		}
// 	}
// 	// for(int i=0;i<n;i++)
// 	// 	cout<<vec[i]<<" ";
// 	// cout<<endl;
// 	for(int i=0;i<m;i++)
// 	{
// 		int flag=0;
// 		if(inp[i].first==0)
// 		{
// 			for(int j=inp[i].second.first;j<=inp[i].second.second;j++)
// 				if(vec[j-1]==0)
// 				{
// 					vec[j-1]=-1;
// 					flag=1;
// 					break;
// 				}

// 		}
// 		else
// 			continue;
// 		if(flag==0)
// 		{
// 			cout<<"NO";
// 			return 0;
// 		}
// 	}
// 	cout<<"YES"<<endl;
// 	int lo=20000,high=1000000,minn=0;
// 	vector<int> ans(n);
// 	if(vec[0]==-1)
// 		ans[0]=--high;
// 	for(int i=1;i<n;i++)
// 	{
// 		if(vec[i]==-1 && vec[i-1]==1 && vec[i+1]==1)
// 			ans[i]=++minn;
// 		else if(vec[i]==-1)
// 			ans[i]=--high;
// 		else
// 			ans[i]=++lo;
// 	}
// 	for(int i=0;i<n;i++)
// 		cout<<ans[i]<<" ";




// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
// 		vector<int> inp(n);
// 		for(int i=0;i<n;i++)
// 			cin>>inp[i];
// 		int max1=0,max2=0;
// 		for(int i=0;i<n;i++)
// 		{
// 			if(inp[i]>=max1)
// 			{
// 				max2=max1;
// 				max1=inp[i];
// 			}
// 			else if(inp[i]>=max2)
// 			{
// 				max2=inp[i];
// 			}
// 		}
// 		if(max2<=1)
// 		{
// 			cout<<0<<endl;
// 			continue;
// 		}
// 		if(max2>=n-1)
// 			cout<<n-2<<endl;
// 		else
// 			cout<<max2-1<<endl;
// 	}

// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int n;
// 	cin>>n;
// 	vector<int> inp(n);
// 	for(int i=0;i<n;i++)
// 		cin>>inp[i];
// 	int flag=0;
// 	for(int i=1;i<n;i++)
// 	{
// 		if(flag==0 && inp[i]>inp[i-1])
// 			continue;
// 		if(flag==0 && inp[i]==inp[i-1])
// 		{
// 			cout<<"no";
// 			return 0;
// 		}
// 		if(flag==0 && inp[i]<inp[i-1])
// 		{	
// 			flag=1;
// 			continue;
// 		}
// 		if(flag==1 && inp[i]<inp[i-1])
// 			continue;
// 		cout<<"no";
// 		return 0;

// 	}
// 	cout<<"yes";
// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int n,k;
// 	cin>>n>>k;
// 	vector<int> a(n);
// 	vector<int> br(n,0);
// 	for(int i=0;i<n;i++)
// 		cin>>a[i];
// 	map<int,vector<int>> mp;
// 	for(int i=1;i<n;i++)
// 		mp[a[i-1]-a[i]].push_back(i);
// 	int curr=0;
// 	for(auto it=mp.begin();it!=mp.end();it++)
// 	{
// 		if(curr==k-1)
// 			break;
// 		for(int kk=0;kk<(*it).second.size();kk++)
// 		{
// 			curr++;
// 			br[((*it).second)[kk]]=1;
// 			if(curr==k-1)
// 			break;
// 		}
// 	}
// 	// for(int i=0;i<n;i++)
// 	// 	if(br[i]==1)
// 	// 		cout<<i<<endl;
// 	int ans=0;
// 	int st=a[0];
// 	for(int i=1;i<n;i++)
// 	{
// 		if(br[i]==1)
// 		{
// 			ans+=(a[i-1]-st);
// 			st=a[i];
// 		}
// 	}
// 	ans+=(a[n-1]-st);
// 	cout<<ans;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	deque<int> ans;
	// for(int i=0;i<n;i++)
	// 	cout<<a[i]<<" ";
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
			ans.push_back(a[i]);
		else
			ans.push_front(a[i]);
	}
	for(int i=1;i<n-1;i++)
		if(ans[i-1]+ans[i+1]<=ans[i])
		{
			cout<<"NO";
			return 0;
		}
	// for(int i=0;i<n;i++)
	// 	cout<<ans[i]<<" ";
	// // cout<<"A";
	if(ans[0]>=ans[1]+ans[n-1])
	{
		cout<<"NO";
		return 0;
	}
	// cout<<"A";
	if(ans[n-1]>=ans[n-2]+ans[0])
	{
		cout<<"NO";
		return 0;
	}
	// cout<<"A";
	cout<<"YES"<<endl;
	for(int i=0;i<n;i++)
		cout<<ans[i]<<" ";

}
