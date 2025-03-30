//PalindromeReorder

#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    map<char, int>mp;
    for(auto it : s){
        mp[it]++;
    }
    int count = 0;
    for(auto it : mp){
        if(it.second % 2 == 1){
            count++;
            if(count > 1){
                cout << "NO SOLUTION" << "\n";
                return;
            }
        }
    }
    string ans="";
    char x= '#';
    for(auto it: mp){
        for(int i = 0; i < it.second/2; i++){
            ans.push_back(it.first);
        }
        if(it.second % 2 ==1 ){
            x = it.first;
        }
    }
    s = ans;
    //先有字串1
    if(x != '#')s += x;
    //加上烙單的1-1
    reverse(ans.begin(), ans.end());
    //字串反轉2
    s+=ans;
    //1-1 + 2
    cout << s;
    //字串可以用+=，也能用push_back
}
int main(){
    solve();
}