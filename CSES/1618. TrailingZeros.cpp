#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int countTrailingZeros(ll n) {
    int count = 0;
    while (n >= 5) {
        count += n / 5;
        n /= 5;
    }
    return count;
}

int main() {
    ll n;
    cin >> n;
    cout << countTrailingZeros(n) << endl;
    return 0;
}
