#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F first
#define FOR(i, n) for(int i = 0; i < (int) n; i++)
#define cin(v) for (auto &i : v) cin >> i;
#define cout(v) for (auto &i : v) cout >> i;
#define WL(t) while(t --)
#define S second
#define PB push_back
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define runtime() cerr << ((double)clock() / CLOCKS_PER_SEC) << endl;
#define MP make_pair
#define llu unsigned long long
typedef long long ll;typedef long double ld;
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}




void solve()
{ 
    ll n, x, y, c = 0;
    cin >> n >> x >> y;
    while (n >= 100)
    {
        c += min(x, y * 25);
        n -= 100;
    } 
    c += min(x, (n % 4 == 0 ? (n / 4) * y : ((n / 4) + 1) * y));
    cout << c << endl;
}




signed main(){
    fast;
    int t = 1;
    cin >> t;
    WL(t){
    	solve();
    }
    runtime();
    return 0;
}

/* if (x > (y * 25))
    {
        cout << (n % 4 == 0 ? (n / 4) * y : ((n / 4) + 1) * y) << endl; 
    }
    else if (x <= y)
    {
        cout << (n % 100 == 0 ? (n / 100) * x : ((n / 100) + 1) * x) << endl;
    }
    else 
    {
        ll c = 0;
        while (n >= 100) n -= 100, c += x;
        cout << c + (n % 4 == 0 ? (n / 4) * y : ((n / 4) + 1) * y) << endl;
    } */