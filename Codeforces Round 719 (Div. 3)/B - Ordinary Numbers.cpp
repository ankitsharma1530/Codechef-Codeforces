#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
void program();
int main(){ ios_base::sync_with_stdio(false); cin.tie(NULL); program();}
#define int long long
#define all(x) x.begin(), x.end()
#define endl "\n"
#define debug(x) cout << #x ": " << x << endl;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wnarrowing"
template <class... Ts>
auto min(Ts... args) { return std::min<typename common_type<Ts...>::type>({args...});}
template <class... Ts>
auto max(Ts... args) { return std::max<typename common_type<Ts...>::type>({args...});}
#pragma GCC diagnostic pop

template<typename T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update>;
// find_by_order, order_of_key

template<
    // Two explicit template parameters are needed for containers like std::map.
    template<class, class> class Range, class K, class V,
    // This overload must be disabled for std::string to avoid ambiguity.
    typename = enable_if_t<!is_same_v<Range<K, V>, string>>
>
ostream& operator<<(ostream& out, const Range<K, V>& range) {
    out << '{';
    for (auto it = range.begin(); it != range.end(); ++it) {
        out << *it << (next(it) != range.end() ? ", " : "");
    }
    return out << '}';
}

template <class F, class S>
ostream& operator<<(ostream& out, const pair<F, S>& pair) {
    return out << '(' << pair.first << ", " << pair.second << ')';
}
 
template<typename T, typename U>
struct hash<pair<T, U>> {
    size_t operator()(const pair<T, U>& p) const noexcept {
        return hash<T>{}(p.first) ^ (hash<U>{}(p.second) << 1);
    }
};
template<typename A, typename B, typename C>
struct hash<tuple<A,B,C>> {
    size_t operator()(const tuple<A,B,C>& p) const noexcept {
        return hash<A>{}(get<0>(p)) ^ (hash<B>{}(get<1>(p)) << 1) ^ (hash<C>{}(get<2>(p)) << 2);
    }
};

inline int numbits(unsigned long long x){ return sizeof(x)*8 - __builtin_clzll(x); }
template<typename T> struct MinFunctor {T operator () (T a, T b) {return min(a,b);}};
template<typename T> struct MaxFunctor {T operator () (T a, T b) {return max(a,b);}};
template<typename T> struct GCDFunctor {T operator () (T a, T b) {return gcd(a,b);}};
template<typename T> struct AddFunctor {T operator () (T a, T b) {return a+b;}};
template<typename T, typename F>
struct SparseTable {
    vector<vector<T>> data;
    F combine;
    SparseTable(vector<T> a) : combine(F()) {
        int n = a.size(), lg2 = ceil(log2(n)) + 1;
        data = vector<vector<T>>(n, vector<T>(lg2));
        for(int i=0;i<n;i++) data[i][0] = a[i];
        for(int p=1;p<lg2;p++) {
            for(int i=0;i+(1<<p)<=n;i++) {
                data[i][p] = combine(data[i][p-1], data[i+(1<<(p-1))][p-1]);
            }
        }  
    }
    
    T query(int l, int r) { // inclusive, exclusive
        assert(l<r);
        int p = numbits(r-l)-1;
        return combine(data[l][p], data[r-(1<<p)][p]);
    }
};
template<typename T> using SparseTableMin = SparseTable<T, MinFunctor<T>>;
template<typename T> using SparseTableMax = SparseTable<T, MaxFunctor<T>>;

int binpow(int a, int b, int m) {
    a %= m;
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int invmod(int a, int m){
    return binpow(a, m-2, m);
}

struct RollingHashes {
    int base;
    int max_size;
    deque<int> data;
    static const int NUM_HASHES = 3;
    vector<int> pb[NUM_HASHES]; // powers of base
    int h[NUM_HASHES]; // hashes
    int m[NUM_HASHES] = {1000000007,
                         1000000009,
                         1000000021};
    array<int,NUM_HASHES> base_inv;
    RollingHashes(int _base, int _max_size) : base(_base), max_size(_max_size) {
        for(int i=0;i<NUM_HASHES;i++){
            h[i] = 0;
            base_inv[i] = invmod(base, m[i]);
            pb[i] = vector<int>(max_size);
            pb[i][0] = 1;
            for(int j=1;j<max_size;j++)
                pb[i][j] = (pb[i][j-1]*base)%m[i];
        }
    }
    void push_back(int x){
        assert(x <= base-1);
        x++; // we don't want x=0
        for(int i=0;i<NUM_HASHES;i++) // update hashes
            h[i] = (h[i]*base + x) % m[i];
        data.push_back(x);
        assert((int)data.size() <= max_size);
    }
    void push_front(int x){
        assert(x <= base-1);
        x++; // we don't want x=0
        for(int i=0;i<NUM_HASHES;i++) // update hashes
            h[i] = (x*pb[i][data.size()] + h[i]) % m[i];
        data.push_front(x);
        assert((int)data.size() <= max_size);
    }
    void pop_back() {
        for(int i=0;i<NUM_HASHES;i++) // update hashes
            h[i] = (h[i] - data.back() + m[i])*base_inv[i] % m[i];
        data.pop_back();
    }
    void pop_front() {
        for(int i=0;i<NUM_HASHES;i++) // update hashes
            h[i] = (h[i] - data.front()*pb[i][data.size()-1]%m[i] + m[i]) % m[i];
        data.pop_front();
    }
    tuple<int,int,int> hash() {
        return {h[0], h[1], h[2]};
    }
};

template<typename T>
vector<int> z_function(vector<T> s) {
    int n = s.size();
    auto z = vector<int>(n);
    for(int L=0,R=0,i=1;i<n;i++) {
        if (i <= R) z[i] = min(R-i+1,z[i-L]);
        while(i+z[i] < n && s[i + z[i]] == s[z[i]]) z[i]++;
        if (i + z[i] > R) L = i, R = i + z[i] - 1; 
    }
    return z;
}
vector<int> z_function(string s) {
    return z_function(vector<char>(s.begin(), s.end()));
}

struct LinearPrimeSieve {
    const static int N = 10000000;
    vector<int> lp, pr;

    LinearPrimeSieve() {
        lp.resize(N+1);
        for (int i=2; i<=N; ++i) {
            if (lp[i] == 0) {
                lp[i] = i;
                pr.push_back(i);
            }
            for (int j=0; j<(int)pr.size() && pr[j]<=lp[i]
                    && i*pr[j]<=N; ++j)
                lp[i * pr[j]] = pr[j];
        }
    }

    vector<int> factor(int x) {
        assert(x >= 2 && x <= N);
        vector<int> res;
        while(x != 1) {
            res.push_back(lp[x]);
            x /= lp[x];
        }
        return res;
    }
};

struct Combinatorics {
    int mod;
    vector<int> facts, inv_facts, inv;

    Combinatorics(int size, int _mod){
        mod = _mod;
        facts.resize(size);
	inv_facts.resize(size);
	inv.resize(size);
        inv[1] = 1;
        for(int i = 2; i < size; i++)
            inv[i] = mod - inv[mod % i] * (mod / i) % mod;
	facts[0] = 1, inv_facts[0] = 1;
        for(int i = 1; i < size; i++){
            facts[i] = facts[i - 1] * i % mod;
            inv_facts[i] = inv_facts[i - 1] * inv[i] % mod;
        }
    }
    
    int c(int n, int k) {
        if (k < 0 || k > n) return 0;
        return facts[n] * inv_facts[n - k] % mod * inv_facts[k] % mod;
    }
}; 

template<typename T, typename F>
struct SegmentTree {
    int n;
    vector<T> t;
    F op;

    SegmentTree(vector<T>& a) {
        n = a.size();
        t = vector<T>(2*n);
        for (int i=0; i < n; i++) t[n+i] = a[i];
        for (int i = n - 1; i > 0; --i) t[i] = op(t[i<<1], t[i<<1|1]);
    }

    void modify(int p, T value) {  // set value at position p
        for (t[p += n] = value; p > 1; p >>= 1) t[p>>1] = op(t[p], t[p^1]);
    }

    T query(int l, int r) {  // operation over interval [l, r)
        // b/c of this 'flag' setup we don't need zero value
        bool flag = false;
        T res; 
        for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
            if (l&1) res = flag ? op(res, t[l++]) : (flag=true, t[l++]);
	    if (r&1) res = flag ? op(res, t[--r]) : (flag=true, t[--r]);
        }
        return res;
    }
};

vector<int> prefix_function(string s) {
    int n = s.size();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}

vector<vector<int>> compute_prefix_automaton(string s) {
    s += '#';
    int n = s.size();
    vector<int> pi = prefix_function(s);
    vector<vector<int>> aut(n, vector<int>(26));
    for (int i = 0; i < n; i++) {
        for (int c = 0; c < 26; c++) {
            if (i > 0 && 'a' + c != s[i])
                aut[i][c] = aut[pi[i-1]][c];
            else
                aut[i][c] = i + ('a' + c == s[i]);
        }
    }
    return aut;
}

vector<int> sort_cyclic_shifts(string const& s) {
    int n = s.size();
    const int alphabet = 256;
    vector<int> p(n), c(n), cnt(max(alphabet, n), 0);
    for (int i = 0; i < n; i++)
	cnt[s[i]]++;
    for (int i = 1; i < alphabet; i++)
	cnt[i] += cnt[i-1];
    for (int i = 0; i < n; i++)
	p[--cnt[s[i]]] = i;
    c[p[0]] = 0;
    int classes = 1;
    for (int i = 1; i < n; i++) {
	if (s[p[i]] != s[p[i-1]])
	    classes++;
	c[p[i]] = classes - 1;
    }
    vector<int> pn(n), cn(n);
    for (int h = 0; (1 << h) < n; ++h) {
        for (int i = 0; i < n; i++) {
            pn[i] = p[i] - (1 << h);
            if (pn[i] < 0)
                pn[i] += n;
        }
        fill(cnt.begin(), cnt.begin() + classes, 0);
        for (int i = 0; i < n; i++)
            cnt[c[pn[i]]]++;
        for (int i = 1; i < classes; i++)
            cnt[i] += cnt[i-1];
        for (int i = n-1; i >= 0; i--)
            p[--cnt[c[pn[i]]]] = pn[i];
        cn[p[0]] = 0;
        classes = 1;
        for (int i = 1; i < n; i++) {
            pair<int, int> cur = {c[p[i]], c[(p[i] + (1 << h)) % n]};
            pair<int, int> prev = {c[p[i-1]], c[(p[i-1] + (1 << h)) % n]};
            if (cur != prev)
                ++classes;
            cn[p[i]] = classes - 1;
        }
        c.swap(cn);
    }
    return p;
}

vector<int> suffix_array_construction(string s) {
    s += "$";
    vector<int> sorted_shifts = sort_cyclic_shifts(s);
    sorted_shifts.erase(sorted_shifts.begin());
    return sorted_shifts;
}

vector<int> lcp_construction(string const& s, vector<int> const& p) {
    int n = s.size();
    vector<int> rank(n, 0);
    for (int i = 0; i < n; i++)
        rank[p[i]] = i;

    int k = 0;
    vector<int> lcp(n-1, 0);
    for (int i = 0; i < n; i++) {
        if (rank[i] == n - 1) {
            k = 0;
            continue;
        }
        int j = p[rank[i] + 1];
        while (i + k < n && j + k < n && s[i+k] == s[j+k])
            k++;
        lcp[rank[i]] = k;
        if (k)
            k--;
    }
    return lcp;
}

struct AhoCorasick {
    const static int K = 26;
    struct Vertex {
	int next[K];
        int leaf = 0;
        int p = -1;
	char pch;
	int link = -1;
        int exit = -1;
	int go[K];

	Vertex(int _p=-1, char _pch='$') : p(_p), pch(_pch) {
	    fill(begin(next), end(next), -1);
	    fill(begin(go), end(go), -1);
	}
    };

    vector<Vertex> t;

    AhoCorasick() {
        t.resize(1);
    }

    void add_string(string const& s, int leaf_marker = 1) {
	int v = 0;
	for (char ch : s) {
	    int c = ch - 'a';
	    if (t[v].next[c] == -1) {
		t[v].next[c] = t.size();
		t.emplace_back(v, ch);
	    }
	    v = t[v].next[c];
	}
	t[v].leaf = leaf_marker;
    }

    int get_link(int v) {
	if (t[v].link == -1) {
	    if (v == 0 || t[v].p == 0)
		t[v].link = 0;
	    else
		t[v].link = go(get_link(t[v].p), t[v].pch);
	}
	return t[v].link;
    }

    int go(int v, char ch) {
	int c = ch - 'a';
	if (t[v].go[c] == -1) {
	    if (t[v].next[c] != -1)
		t[v].go[c] = t[v].next[c];
	    else
		t[v].go[c] = v == 0 ? 0 : go(get_link(v), ch);
	}
	return t[v].go[c];
    }

    int exit(int v) {
        assert(v != 0);
        if (t[v].exit == -1) {
            int nxt = get_link(v);
            t[v].exit = (nxt == 0 || t[nxt].leaf) ? nxt : exit(nxt);
        }
        return  t[v].exit;
    }

    vector<int> get_leafs(int v) {
        vector<int> res;
        for (;v != 0;v = exit(v)) if (t[v].leaf)
            res.push_back(t[v].leaf);
        return res;
    }
};


int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

void solve();
void program(){
    int T;
    cin>>T;
    while(T--){solve();}
}

void solve() {
    int n;
    cin>>n;
    int x = 1;
    int cnt = 0;
    while (true) {
        bool bad = false;
        for(int d=1;d<=9;d++) {
            if (d*x > n) {
                bad = true;
                break;
            }
            cnt++;
        }
        if(bad) break;
        x = x*10 + 1;
    }
    cout<<cnt<<endl;
}

