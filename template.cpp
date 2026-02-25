/* Author: alphoenix */

#include <bits/stdc++.h>
using namespace std;

// --- TYPES ---
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pdd = pair<double, double>;
using vi = vector<int>;
using vll = vector<ll>;
using si = set<int>;
using mii = map<int, int>;
using vii = vector<pii>;
using vvi = vector<vi>;
using vsi = vector<si>;
using sii = set<pii>;
using qi = priority_queue<int>;
using qii = priority_queue<pii>;
using qgii = priority_queue<pii, vii, greater<pii>>;

// --- MACROS ---
#define in(n,a) vi a(n); for(int &x:a) cin >> x;
#define out(a) for(int &x:a) cout << x << " "; cout << "\n";
#define fo(i,a,b) for(int i = a; i < b; ++i)
#define rfo(i,a,b) for(int i = a; i >= b; --i)

#define lsb(n) ((n) & -(n))
#define msb(n) (63 - __builtin_clzll(n)) 
#define nsb(n) (__builtin_popcountll(n))
#define sz(x) ((int)(x).size())
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()

#define ff first
#define ss second
#define pb push_back
#define ppb pop_back
#define eb emplace_back
#define mp make_pair
#define lb lower_bound // >= 
#define ub upper_bound // >

#define nl "\n"
#define maxe(a) (*max_element(all(a)))
#define mine(a) (*min_element(all(a)))

#define pY {cout << "YES\n"; return;}
#define pN {cout << "NO\n"; return;}
void show (bool x) {cout << ((x) ? "YES":"NO") << nl; return;}

// --- DEBUG ---
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int t) {cerr << t;}
void _print(ll t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
void _print(bool t){cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

// --- CONSTANTS ---
constexpr ll INF = 1e18;       // Use for long long
constexpr int INF32 = 1e9 + 7; // Use for 32-bit int
constexpr int mod = 1000000007;
constexpr int mod1 = 998244353;
constexpr int N = 100007;

void solve(){
    
}  

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
	#endif
    
    cin.tie(0)->sync_with_stdio(0);
    int T; cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
