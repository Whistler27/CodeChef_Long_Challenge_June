#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
 
#define endl '\n'
#define loop(i, m, n) for (ll i = m; i < n; i++)
#define loope(i, m, n) for (ll i = m; i <= n; i++)
#define epool(i, m, n) for (ll i = m; i >= n; i--)
#define mod 1000000007
#define mod2 998244353
#define vi vector<ll>
#define fi first
#define se second
#define pb push_back
#define MP make_pair
#define empf emplace_front
#define empb emplace_back
#define ret(x) return cout << x,0;
#define all(v) v.begin(),v.end()

#define naman                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

ll mpow(ll base, ll exp){
    base %= mod;
    ll result = 1;
    while (exp > 0){
        if (exp & 1)
            result = ((ll)result * base) % mod;
        base = ((ll)base * base) % mod;
        exp >>= 1;
    }
    return result;
}

const ll INF=1e18;
const double PI=4*atan(1);


void solve(){
    ll n;
    cin >> n;
    ll a[n];
    loop(i,0,n) cin >> a[i];
    ll a1=0,b=0;
    bool f=1;
    loop(i,0,n){
        if(a[i]==10){
            if(a1==0){
                cout << "NO" << endl;
                return;
            }
            a1--;
            b++;
        }
        else if(a[i]==15){
            if(b>=1){
                b--;
            }
            else{
                if(a1>=2){
                    a1-=2;
                }
                else{
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        else a1++;
    }
    cout << "YES" << endl;

}

int32_t main(){
    naman
    ll i = 0,j = 0;

// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif

    //cout << fixed << setprecision(10);

    int t;
    t=1;
    cin >> t;
    while (t--){
        solve();

    }

}