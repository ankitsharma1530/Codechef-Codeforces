#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;

using namespace std;

long long primenxt(long long int a)
{
	int temp = 0;
	while (1)
	{
		temp = 0;
		for (int i = 2; i * i <= a; i++)
		{
			if (a % i == 0)
			{
				temp = 1;
				break;
			}
		}
		if (temp == 0)
			break;
		else
			a++;
	}
	return a;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	for (int tt = 0; tt < t; tt++)
	{
		int d;
		
		cin >> d;
		long long int ans = 0;
		long long int a = d + 1;
		
		a= primenxt(a);
		long long int b = a + d;
		b=primenxt(b);
		ans = a * b;
		cout << ans << "\n";
	}
#ifndef ONLINE_JUDGE
	cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
	return 0;
}
