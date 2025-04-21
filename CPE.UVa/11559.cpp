#include <bits/stdc++.h>
using namespace std;

int findmini(vector<int> vec){
    int result = vec[0];
    for(size_t i = 0; i < vec.size(); i++){
        if(vec[i] < result){
            result = vec[i];
        }
    }
    return result;
}

int main(){
    int numbers, budgets, hotels, weeks;
    vector<int> vecH;
    while(cin >> numbers >> budgets >> hotels >> weeks){
        vecH.clear();
        for(int i = 0; i < hotels; i++){
            int price;
            cin >> price;
            for(int j = 0; j < weeks; j++){
                int beds;
                cin >> beds;
                if(beds >= numbers){
                    if((price * numbers) <= budgets){
                        vecH.push_back((price * numbers));
                    }
                } 
            }
        }
        if(vecH.size() == 0){
            cout << "stay home" << endl;
        }
        else{
            cout << findmini(vecH) << endl;
        }

    }   
}