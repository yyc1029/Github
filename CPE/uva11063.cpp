#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int caseNum = 1;
    int n;
    
    while (cin >> n) {
        vector<int> B(n);
        bool isB2 = true;
        unordered_set<int> sumSet;

        // 讀取數列
        for (int i = 0; i < n; i++) {
            cin >> B[i];
            // 若非正數或非遞增則直接判斷為 false
            if (B[i] <= 0 || (i > 0 && B[i] <= B[i - 1])) {
                isB2 = false;
            }
        }

        // 檢查所有的兩兩元素和是否唯一
        for (int i = 0; i < n && isB2; i++) {
            for (int j = i; j < n; j++) {  // j = i 開始，允許同一個數字加兩次
                int sum = B[i] + B[j];
                if (sumSet.count(sum)) {
                    isB2 = false;
                    break;
                }
                sumSet.insert(sum);
            }
        }

        // 輸出結果
        if (isB2)
            cout << "Case #" << caseNum << ": It is a B2-Sequence.\n";
        else
            cout << "Case #" << caseNum << ": It is not a B2-Sequence.\n";
        cout << endl;  // 根據題目要求，每個測資結果後要有空行

        caseNum++;
    }

    return 0;
}
