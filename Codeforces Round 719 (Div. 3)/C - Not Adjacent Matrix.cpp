#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j,k,num,n;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		num=1;
		if(n==2)
			cout<<-1<<endl;
		else
		{
			for(j=0;j<n;j++)
			{
				for(k=0;k<n;k++)
				{
					cout<<num<<" ";
					num+=2;
					if(num>n*n)
						num=2;
				}
				cout<<endl;
			}
		}
		
	}
}
