/* Author: alphoenix */

#include <bits/stdc++.h>
using namespace std;
#define int long long

typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<double,double> pdd;
typedef vector<int> vi;
typedef set<int> si;
typedef map<int,int> mii;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef vector<si> vsi;
typedef set<pii> sii;
typedef priority_queue<int> qi;
typedef priority_queue<pii> qii;
typedef priority_queue<pii, vii, greater<pii>> qgii;

#define cin(x) int x; cin >> x;
#define cin2(x,y) int x, y; cin >> x >> y;
#define in(n,a) vi a(n); for(int &x:a) cin >> x;
#define out(a) for(int &x:a) cout << x << " "; cout << nl;
#define fo(i,a,b) for(int i = a; i < b; ++i)
#define rfo(i,a,b) for(int i = a; i >= b; --i)

#define lsb(n) (n & -n)
#define msb(n) (1LL << (63 - __builtin_clzll(n)))
#define nsb(n) (__builtin_popcountll(n))
#define len(n) (to_string(n).size())
#define is2pow(n) (n && (!(n & (n-1))))

#define nl "\n"
#define sz(x) ((int)(x).size())
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define maxe(a) (*max_element(all(a)))
#define mine(a) (*min_element(all(a)))

#define M map
#define V vector
#define P pair
#define ff first
#define ss second
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound

#define pY  {cout << "YES\n"; return;}
#define pN  {cout << "NO\n"; return;}
void show (bool x) {cout << ((x) ? "YES":"NO") << nl; return;}

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

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

#define INF 1e18
const int mod = 1e9+7;
const int mod1 = 998244353;
const int N = 2e5+7;

void solve(){
	
}

signed main(void){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T; cin >> T;
    while(T--){
        solve();
    }
    return 0;
}