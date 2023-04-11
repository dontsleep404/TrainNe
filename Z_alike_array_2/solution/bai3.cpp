#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1000000][2];
int main(){
    ll n, index = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        ll tmp;
        if(i == 0) {
            cin >> a[index][0];
            a[index][1] = 1;
        }else{
            cin >> tmp;
            if(tmp == a[index][0]) a[index][1]++;
            else{
                a[++index][0] = tmp;
                a[index][1] = 1;
            }
        }
    }
    ll count = 0;
    for(int i = 0; i <= index; i++){
        count = max(count, a[i][1]);
        if(i <= index - 2 && a[i+1][1] == 1 && a[i+2][0] == a[i][0]) count = max(count, 1 + a[i][1] + a[i+2][1]);
    }
    cout << count << endl;
}