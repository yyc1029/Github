#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int position = 0;
        int steps;
        cin >> steps;
        cin.ignore();
        vector<string> vec;

        for (int i = 0; i < steps; i++) {
            string s;
            getline(cin, s);
            if (s == "LEFT" || s == "RIGHT") {
                vec.push_back(s);
            } else {
                int instruction = stoi(s.substr(8)) - 1;
                //stoi 會直接把抓取的數改成int, and s.substr會從跳過前8字元，往後抓
                vec.push_back(vec[instruction]);
            }
        }

        for (const string& cmd : vec) {
            if (cmd == "LEFT") position -= 1;
            else if (cmd == "RIGHT") position += 1;
        }

        cout << position << endl;
    }
    return 0;
}
