#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    for(int i = 0; i < (1 << n); i++){
        int target = i ^ (i >> 1);
        string s = "";
        for(int j = n - 1; j >= 0; j--){
            s += ((target >> j) & 1) ? '1' : '0';
        }
        cout << s << "\n";
    }
}

int main(){
    solve();
}
