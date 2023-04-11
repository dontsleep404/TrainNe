#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll modmul (ll a, ll b, ll mod) {
    if (b == 0) return 1;
    if (b % 2 == 0) {
        ll x = modmul(a, b / 2, mod);
        return (x * x) % mod;
    }
    return (a * modmul(a, b - 1, mod)) % mod;
}
int main(){
    ll a, b;
    cin >> a >> b;
    cout << modmul(a, b, 10000);
}