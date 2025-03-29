//Number Spiral
//哇！！過了！！
//先算出對角線最大值，再看是奇偶數，決定後續的加減順序
#include <iostream>
using namespace std;

int main(){
    long long int times = 0;
    cin >> times;  
    for(long long int i = 0; i < times; i++){
        long long int a = 0, b = 0;
        cin >> a >> b;
        long long int maxpos = max(a, b);
        long long int maxNum = maxpos * maxpos - (maxpos - 1);
        long long int result = 0;
        if(maxpos % 2 == 0){
            if(a == maxpos){
                result = maxNum - (b - a);
            }
            else{
                result = maxNum - (b - a);
            }
        }
        else{
            if(a == maxpos){
                result = maxNum - (a - b);
            }
            else{
                result = maxNum - (a - b);
            }
        }
        cout << result << endl;
    }
    return 0;
}