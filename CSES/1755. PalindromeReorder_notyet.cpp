//PalindromeReorder

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

string s;
map<char, int> mp;
vector< pair<char, int> > v;

void count(){
    for( auto i : s ){
        mp[i]++;
    }
}
int main(){ 
    cin >> s;
    count();
    
    cout << mp.rbegin()->second << "\n";
    for( auto it = mp.begin() ; it != mp.end() ; ++it ){
        cout << it->first << " " << it->second << "\n";
    }

    return 0;
}