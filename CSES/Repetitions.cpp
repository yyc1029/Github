//Repetitions
//像是bubblesort那樣，經過每個元素，又從每個元素開始找最長的
//連續重複字元，最後找出最長的連續重複字元
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        int count = 1;
        int max = 0;
        for(int j = i; j < s.size(); j++){
            if(s[j] == s[j+1]){
                count++;
            }
            else{
                if(count > max){
                    max = count;
                }
                count = 1;
            }
        }
        if(max > count){
            count = max;
        }
        if(count > max){
            max = count;
        }
        cout << max << endl;
        break;
    }
    return 0;
}