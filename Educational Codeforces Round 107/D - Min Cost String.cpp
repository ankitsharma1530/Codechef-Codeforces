#include<iostream>
using namespace std;
int main()
{
    int n,k;
	cin>>n>>k;
	int x = 0;
	int arr[26]={0};
	for(int i=1;i<=n;i++)
	{
		cout<<char(x+'a');
        x = (x + arr[x]++)%k;
	}
	cout<<endl;
	return 0;
}
