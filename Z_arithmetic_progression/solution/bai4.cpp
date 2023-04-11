#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int b[100000];
int main(){
    int n, tmp;
    cin >> n;
    int a[4] = {0, 0 , 0 , 0};
    for(int i = 0; i < n; i++){
        cin >> b[i];
        if(i > 0) b[i-1] = b[i] - tmp;
        tmp = b[i];
    }
    for(int i = 0; i < n-1; i++){
        a[1] = b[i];
        if(a[1] == a[0]) a[2]++;
        else{            
            a[3] = max(a[3], a[2]);
            a[0] = a[1];
            a[2] = 1;
        }
    }
    a[3] = max(a[3], a[2]);
    cout << a[3] + 1 << endl;
}