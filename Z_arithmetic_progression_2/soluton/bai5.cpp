#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n, k;
    cin >> n >> k;
    map<ll, ll> m;
    ll mx = 0;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if(m[x-k] == 0) {
            m[x] = 1;
        } else {
            m[x] = m[x-k] + 1;
        }
        mx = max(mx, m[x]);
    }
    cout << mx;
}