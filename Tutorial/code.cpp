#include <bits/stdc++.h>
using namespace std;

/* ---------- PRINT SHORTCUT ---------- */
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define nl cout << "\n"
#define sp cout << " "

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

    // Important tricks
    // n =  1000 (8)
    // n-1= 0111 (7)
// It Means - Any power of 2 value minus 1 korle lastbit 1 er por theke sob gula bit set hoye jay ar oi last set bit ta unset hoy

    // ete kore amra caile o(1) ei ekta value power of 2 kina seta dekhte pari  --->   if(n&(n-1)) yes
                                                                                    // else no


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
