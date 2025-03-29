//Permutations
//n就是1~n都要用到，然後新的數列的數差都要大於1
//所以就可以先印出偶數，在印出奇數
#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >> n;
    if(n == 2 || n ==3){
        cout << "NO SOLUTION" << endl;
    }
    else if(n == 1){
        cout << 1 << endl;
    }
    else{
        for(int i = 2; i <= n; i+=2){
            cout << i << " ";
        }
        for(int i = 1; i <= n; i+=2){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}