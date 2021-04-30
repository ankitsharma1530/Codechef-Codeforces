#include <bits/stdc++.h>

const long long SZ = 1e5 + 7;
const long long inf = 1e18;
const long long MOD = 1e9 + 7;
const long long mod = 1e9 + 7;
long long opnmbr = 1;

#define ll                  long long
#define ld                  long double

#define pb                  push_back
#define mp                  make_pair
#define eb                  emplace_back

#define pll                 pair<ll, ll>
#define vi                  vector<ll>
#define vs                  vector<string>
#define vpl                 vector<pll>
#define qi                  queue<ll>
#define si                  set<ll>
#define mi                  map<ll, ll>
#define umi                 unordered_map<ll, ll>

#define fi                  first
#define se                  second

#define sz(x)               (ll)x.size()

#define all(c)              (c).begin(), (c).end()
#define allr(c)             (c).rbegin(), (c).rend()

#define Max(a,b)            ((a > b) ? a : b)
#define Min(a,b)            ((a < b) ? a : b)

#define ci(X)               ll X; cin>>X
#define cii(X, Y)           ll X, Y; cin>>X>>Y
#define ciii(X, Y, Z)       ll X, Y, Z; cin>>X>>Y>>Z
#define ciiii(W, X, Y, Z)   ll W, X, Y, Z; cin>>W>>X>>Y>>Z

#define dbg(x)              cout<<#x<<"="<<(x)<<endl;
#define dbg2(x,y)           cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<endl;
#define dbg3(x,y,z)         cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<" "<<#z<<"="<<(z)<<endl;
#define dbg4(x,y,z,w)       cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<" "<<#z<<"="<<(z)<<" "<<#w<<"="<<(w)<<endl;

#define ons()               cout<<"Case #"<<opnmbr++<<": ";
#define krosuru             ll ___T; cin>>___T; while (___T-- > 0)
#define yehbhitheekhai      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

#define inf                 1e18
#define Endl                endl

#define forn(i, n)          for(ll i = 0; i < (n); i++)
#define fore(i, n)          for(ll i = 1; i <= (n); i++)
#define forl(i, l, r)       for(ll i = l; i < (r); i++)
#define forr(i, l, r)       for(ll i = l; i >= (r); i--)

#define ms0(X)              memset((X), 0, sizeof((X)))
#define ms1(X, V)           memset((X), -1, sizeof((X)))
#define flv(X, V)           fill(all((X)), V)

using namespace std;

ll powermod(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1) ans = (ans * a) % MOD;
        b = b / 2;
        a = (a * a) % MOD;
    }
    return ans;
}

ll gcd(ll a, ll b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

void krdiyasuru()
{
    ci(n);
    vi u(n);
    si elem;
    forn(i, n)
    {
        cin >> u[i];
        u[i] --;
        elem.insert(u[i]);
    }
    vi s(n);
    forn(i, n)
    {
        cin >> s[i];
    }
    vi lst[n + 1];
    forn(i, n)
    {
        lst[u[i]].pb(s[i]);
    }
    for(auto x: elem)
    {
        sort(allr(lst[x]));
    }
    vi dp[n];
    forn(i, n)
    {
        if(sz(lst[i]))
        {
            dp[i].pb(lst[i][0]);
            forl(j, 1, sz(lst[i]))
            {
                dp[i].pb(dp[i][sz(dp[i]) - 1] + lst[i][j]);
            }
        }
    }
    vi ans(n + 1);
    forn(i, n)
    {
        if(sz(lst[i]))
        {
            forl(j, 1, sz(lst[i]) + 1)
            {
                ans[j] += dp[i][(sz(lst[i]) / j) * j - 1];
            }
        }
    }
    forl(i, 1, sz(ans))
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return;
}

int main()
{
    yehbhitheekhai;
    //    solve();
        krosuru
    {
        krdiyasuru();
    }
}
