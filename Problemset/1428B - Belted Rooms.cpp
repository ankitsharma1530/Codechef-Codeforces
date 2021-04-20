#include <iostream>
#include <cmath>
#include <string>
#include <queue>
#include <cstring>
#include <list>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <stack>
#define fcio                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
#define eps 1e-12
#define inf 0x3f3f3f3f3f3f3f3f
#define MEM(a, b) memset((a), (b), sizeof(a))
using namespace std;
typedef long long ll;
const int maxn = 1e6 + 10;
const int maxmp = 1e3 + 10;

int main()
{
    fcio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int numf = 0, numb = 0, num_ = 0;
        for (int i = 0; i < n; i++)
            if (s[i] == '-')
                num_++;
            else if (s[i] == '>')
                numf++;
            else
                numb++;
        if (numb == 0 || numf == 0)
            cout << n << endl;
        else
        {
            int ans = 0;
            if (s[0] == '-' || s[n - 1] == '-')
                ans++;
            for (int i = 1; i < n; i++)
                if (s[i - 1] == '-' || s[i] == '-')
                    ans++;
            cout << ans << endl;
        }
    }
    return 0;
}
