#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    
    unordered_map<int, int> ball_count;
    
    vector<int> results;
    
    for(int i = 0; i < Q; i++){
        int type, x;
        cin >> type;
        if(type == 1){
            //ボール追加
            cin >> x;
            ball_count[x]++;
        }else if (type == 2){
            //ボール取り出し
            cin >> x;
            if(ball_count[x] > 0){
                ball_count[x]--;
            }
        }else if (type == 3){
            //袋に入っているボールの種類数を計算
            int distinct_count = 0;
            for(const auto& entry : ball_count){
                if(entry.second > 0){
                    distinct_count++;
                }
            }
            results.push_back(distinct_count);
        }
    }
    
    for(int result : results){
        cout << result << endl;
    }
}
