#include <bits/stdc++.h>
using namespace std;

int Fac(int a){
    if(a == 1 || a == 0)return 1;
    return a * Fac(a-1);
}

int main(){
    int a;
    while(cin >> a){
        cout << a << "! = ";
        for(int i = a; i > 1; i--){
            cout << i << " * ";
        }
        cout << "1 ";
        cout << "= " << Fac(a) << endl;
    }
    return 0;
}