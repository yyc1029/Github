#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/**
int main(){
    vector<int>v;
    int n;
    while(cin >> n){
        v.push_back(n);
        sort(v.begin(), v.end());
        if(v.size() % 2 == 0){
            cout << (v[v.size()/2] + v[v.size()/2 - 1]) / 2 << endl;
        }
        else{
            cout << v[v.size()/2] << endl;
        }
    }
    return 0;
}
**/
int main(){
    int arr[10000] = {};
    int i = 0;
    while(cin >> arr[i]){
        sort(arr, arr + i);
        if(i % 2 == 0){
            cout << (arr[i/2] + arr[i/2 - 1]) / 2 << endl;
        }
        else{
            cout << arr[i/2] << endl;
        }
        i++;
    }
    return 0;
}