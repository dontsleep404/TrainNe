#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    int a[4] = {0, 0 , 0 , 0};
    for(int i = 0; i < n; i++){
        cin >> a[1];
        if(a[1] == a[0]) a[2]++;
        else{            
            a[3] = max(a[3], a[2]);
            a[0] = a[1];
            a[2] = 1;
        }
    }
    a[3] = max(a[3], a[2]);
    cout << a[3] << endl;
}