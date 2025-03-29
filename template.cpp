#include<bits/stdc++.h>
using namespace std;

#define opt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MAXN = 1e7 + 50;
const int Mod = 1e9 + 7;

int kcm(int base, int power){
    int res = 1;
    while(power > 0){
        if(power & 1)res = res * base;
        base *= base;
        power >>= 1;
    }
    return res;
}

/* map 用法
    cout << mp.rbegin()->second << "\n";
    for( auto it = mp.begin() ; it != mp.end() ; ++it ){
        cout << it->first << " " << it->second << "\n";
    }
*/

int main(){
    opt
}