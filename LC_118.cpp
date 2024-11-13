#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer{{1}};

        for(int i=1; i<numRows; i++){
            if(answer[i-1].size() < 2){
                answer.push_back({1,1});
            }else{                
                vector<int> row{1};

                for(int j=0; j<(answer[i-1].size() - 1); j++){
                    row.push_back(answer[i-1][j]+answer[i-1][j+1]);
                }

                row.push_back(1);
            }
        }

        return answer;
    }

int main(){
    vector<vector<int>> answer = generate(5);

    for(auto i : answer){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}