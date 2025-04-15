#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main(){
    map<string, string> dict;
    string input, key, value;
    stringstream ss;
    while(getline(cin, input) && input != ""){
        ss.clear();
        ss << input;
        ss >> value >> key;
        dict[key] = value;
    }

    while(cin >> key){
        if(dict.find(key) != dict.end()){
            cout << dict[key] << endl;
        }
        else cout << "eh" << endl;
    }

    return 0;
}
