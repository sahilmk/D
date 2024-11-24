#include<bits/stdc++.h>

using namespace std;

vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
    int m = box.size();
    int n = box[0].size();
    vector<vector<char>> answer(n,vector<char>(m,' '));

    for(int i=m-1; i>=0; i--){
        int lastStop = n-1;
        int col = m-1-i;
        for(int j=n-1; j>=0; j--){
            if(box[i][j] == '#'){
                answer[lastStop][col] = box[i][j];
                lastStop--;
            }else if(box[i][j] == '*'){
                while(lastStop > j){
                    answer[lastStop][col] = '.';
                    lastStop--; 
                }

                answer[lastStop--][col] = '*';

                if(lastStop < 0){
                    break;
                }
            }
        }

        while(lastStop >= 0){
            answer[lastStop--][col] = '.';
        }
    }

    return answer;
}

int main(){
    vector<vector<char>> question = {
    {'#', '#', '*', '.', '*', '.'},
    {'#', '#', '#', '*', '.', '.'},
    {'#', '#', '#', '.', '#', '.'}
};

              
    vector<vector<char>> answer = rotateTheBox(question);

    for(auto i:answer){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}