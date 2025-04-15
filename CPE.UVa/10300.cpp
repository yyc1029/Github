#include <iostream>
using namespace std;

long long int money(long long int a, long long int b, long long int c){
    return a*c;
}

int main(){
    int times;
    cin >> times;
    for(int i = 0; i < times; i++){
        int farmers;
        cin >> farmers;
        long long int result = 0;
        for(int j = 0; j < farmers; j++){
            long long int a, b, c;
            cin >> a >> b >> c;
            result += money(a, b, c);
        }
        cout << result << endl;
    }
    return 0;
}