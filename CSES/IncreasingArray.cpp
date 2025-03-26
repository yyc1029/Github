#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long>v(n);
    long long int res = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 1; i < n; i++){
        if(v[i] < v[i-1]){
            res += v[i-1] - v[i];
            v[i] = v[i-1];
        }
    }
    cout << res << endl;
    return 0;
}