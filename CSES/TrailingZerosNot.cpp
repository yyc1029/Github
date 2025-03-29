#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int factorial(int n){
    int ans = 1;
    for(int i = 2; i <= n; i++){
        ans *= i;
    }
    return ans;
}

int main(){
    ll n = 0;
    cin >> n;
    ll num = factorial(n);
    cout << num << endl;
    string s = to_string(num);
    int count = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}