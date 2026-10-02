#include <bits/stdc++.h>
using namespace std;

/*PBDS*/

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 

using namespace __gnu_pbds;

/* ---------- TYPES ---------- */
typedef long long ll;

template<typename T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update
>;

template<typename T>
using ordered_multiset = tree<
    pair<T, int>,
    null_type,
    less<pair<T, int>>,
    rb_tree_tag,
    tree_order_statistics_node_update
>;

template <class T>
inline bool minn(T& a, const T& b) {
        return b < a ? a = b, 1 : 0;
}

template <class T>
inline bool maxx(T& a, const T& b) {
        return a < b ? a = b, 1 : 0;
}

/* ---------- FAST IO ---------- */
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

/* ---------- LOOP ---------- */
#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define rep2(i,l,r) for(int i=l;i<r;i++)

/* ---------- SHORTCUTS ---------- */
#define PB push_back
#define PPB pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define LB lower_bound
#define UB upper_bound
#define F first
#define S second
#define SZ(x) (int) (x).size()

int popcnt(int x) { return __builtin_popcount(x); }
int popcnt(ll x) { return __builtin_popcountll(x); }

const ll INF = 1e18;
const ll MOD = 1e9 + 7;

/* ---------- PRINT SHORTCUT ---------- */
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define nl cout << "\n"
#define sp cout << " "

/* ---------- MATH ---------- */
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a) / gcd(a,b) * (b))

/* ---------- VECTOR SHORTCUT ---------- */
#define vll vector<ll>
#define vi vector<int>
#define vecin(v,n) vector<ll> v(n); rep(i,n) cin >> v[i];
#define vecout(v) for(auto &x:v) cout << x << ' '; nl;

void solve(){

    int n  ; cin>>n;
    bitset<10> binary(n);

    // dicimal to bin
    cout<<"Binary of "<<n;sp;
    cout<<binary;nl;


    // 2nd set bit 

    n |= (1<<2);

    bitset<10> binary2(n);
    cout<<"2nd bit Set ";
    cout<<binary2;
    nl;


    // 2nd bit unset

    n &= ~(1<<2);
    bitset<10> binary3(n);
    cout<<"2nd bit unSet ";sp;
    cout<<binary3;nl;

    // check 5th bit set or not 
    cout<<"5th bit is set ?? ";
    if(n&(1<<5)) yes;
    else no;

    // toogle 3rd bit

    n ^= (1<<3);
    bitset<10> binary4(n);
    cout<<"toogle 3rd bit ";
    cout<<binary4;nl;

    // check even odd

    if(n&1) cout<<n<<" is odd";
    else cout<<n<<" is even";
    nl;

    // clear  the lowest set bit
    bitset<10> binary5(n);
    cout<<"Before Clear Lowest set bit "<<binary5;nl;
    for(int i=0;i<=32;i++){
        if(n&(1<<i)) {
             n &= ~(1<<i);
             break;
        }
    }

    bitset<10> binary6(n);
    cout<<"After Clear Lowest set bit "<<binary6;nl;

    // count set bit
    cout<<"Totat Set Bit ";
    cout<<__builtin_popcount(n);nl;

    //easy version of count set bit
    int cnt=0;
    while(n){
        n&=(n-1);
        cnt++;
    }

    // count leading zero 

    cout<<__builtin_clz(n);

    // count tailing zero 

    cout<<__builtin_ctz(n);

    // check parity means set bit  count odd or even??
    // if odd return 1 else even return 0

    cout<<__builtin_parity(n);


}

signed main(){
    fastio;
    int _ = 1;

    // cin>>_;

    for(int i=1;i<=_;i++){
        //cout<<"Case : "<<i<<' ';
         solve();
    }
    return 0;
}
