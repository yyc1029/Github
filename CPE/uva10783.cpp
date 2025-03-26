#include <iostream>
using namespace std;

int main(){
    int times;
    cin >> times;
    for(int i = 0; i < times; i++){
        int a, b;
        int numcase = 1;
        while(cin >> a >> b){
            int result = 0;
            for(int j = a; j <= b; j++){
                if(j % 2 == 1){
                    result += j;
                }
            }
            cout << "Case :" << numcase << ": " << result << endl;
            numcase++;
        }
    }
    return 0;
}
