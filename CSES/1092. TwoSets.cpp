#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a, b;
    int result = n * (n + 1) / 2;
    if(result % 2 == 0){
        if(n % 2 == 0){
            for(int i = 1; i < n/2; i+= 2){
                a.push_back(i);
                a.push_back(n - (i-1));
                b.push_back(i + 1); ;
                b.push_back(n - (i-1) - 1);
            }
        }
        else{
            if(n == 3){
                a.push_back(1);
                a.push_back(2);
                b.push_back(3);
            }
            else if(n > 3){
                a.push_back(1);
                a.push_back(2);
                b.push_back(3);
                for(int i = 1; i < (n-3)/2; i+= 2){
                    a.push_back(i+3);
                    a.push_back(n - (i-1));
                    b.push_back(i + 1 + 3) ;
                    b.push_back(n - (i-1) - 1);
                }
            }
        }
    }
    else{
        cout << "NO" << endl;
        return 0;
    }
    
    cout << "YES" << endl;
    cout << a.size() << endl;
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << "\n" << b.size() << endl;
    for(int i = 0; i < b.size(); i++){
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}