#include<bits/stdc++.h>
using namespace std;

#define opt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MAXN = 1e7 + 50;
const int Mod = 1e9 + 7;

int kcm(int base, int power){
    int res = 1;
    while(power > 0){
        if(power & 1)res = res * base;
        //這裡不是指1，而是假設pow = 4
        //00000100 跟 00000000 
        //從0, 0 開始比較
        base *= base;
        power >>= 1;
    }
    return res;
}

/* map 用法
    cout << mp.rbegin()->second << "\n";
    這是回傳最後一位
    for( auto it = mp.begin() ; it != mp.end() ; ++it ){
        cout << it->first << " " << it->second << "\n";
    }
    輸出像是
    A 7
    B 2
    void count(){
    for( auto i : s ){
        mp[i]++;
    }
}
*/

int main(){
    opt
}