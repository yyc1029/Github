#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        long long total = (pow(i,4) - pow(i,2)) / 2;
        long long attack = 4 * (i - 1) * (i - 2);
        long long int ans = total - attack;
        cout << ans << endl;
    }
    return 0;
}
