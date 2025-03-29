#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = (int)(1e9+7);
int main(){
    ll n = 0;
    ll ans = 1;
    cin >> n;
    for(int i = 0; i < n; i++){
        ans *= 2;
        ans %= mod;
    }
    cout << ans << endl;
    return 0;
}
