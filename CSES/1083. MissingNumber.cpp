//MissingNumber
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMax(vector<int>v){
    int max = v[0];
    for(int i = 1; i < v.size(); i++){
        if(v[i] > max)
        max = v[i];
    }
    return max;
}

int main(){
    int n;
    cin >> n;
    vector<int>v;
    for(int i = 0; i < n - 1; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    int maxnum = findMax(v);
    v.push_back(0);
    sort(v.begin(), v.end());
    int res = 0;
    for(int i = 0; i < n-1; i++){
        if(v[i+1] - v[i] > 1){
            res = v[i] + 1;
            break;
        }   
    }
    if(maxnum == n - 1 )res = n;
    cout << res << endl;
    return 0;
}