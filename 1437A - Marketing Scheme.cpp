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
    int l,r;
    cin>>l>>r;

    if(l*2>r)
    {
      cout<<"YES\n";
    }
    else
    {
      cout << "NO\n";
    }
    
  }
#ifndef ONLINE_JUDGE
  cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
  return 0;
}
