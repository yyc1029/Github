#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    ll times = 0;
    cin >> times;
    for(ll i = 0; i < times; i++){
        ll a, b;
        cin >> a >> b;
        if(a < b){
            swap(a, b);
        }
        if(a > 2 * b){
            cout << "NO" << endl;
            continue;
        }
        if(a % 3 == 0 && b % 3 == 0){
            cout << "YES" << endl;
            continue;
        }
        if(a % 3 == 1 && b % 3 == 2){
            cout << "YES" << endl;
            continue;
        }
        if(a % 3 == 2 && b % 3 == 1){
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}