#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;

using namespace std;

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
    int n,k;
    cin>>n>>k;
    if (n % k == 0)
    {
      cout << 1 << endl;
    }
    else if (n > k)
    {
      cout << 2 << endl;
    }
    else if (k % n == 0)
    {
      cout << k / n << endl;
    }
    else
    {
      cout << k / n + 1 << endl;
    }
  }
#ifndef ONLINE_JUDGE
  cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
  return 0;
}
