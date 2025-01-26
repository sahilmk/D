#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> answer;
        int i=0,j=0;
        int rows = grid.size();
        int columns = grid[0].size();
        
        for(i=0; i<rows; i++){
            if(i%2 == 0){
                for(j=0;j<columns;j++){
                    if(j%2==0){
                        answer.push_back(grid[i][j]);
                    }
                }
            }else{
                for(j=columns-1;j>=0;j--){
                    if(j%2 == 1){
                        answer.push_back(grid[i][j]);
                    }
                }
            }
        }
        
        return answer;
    }
};

int main(){
    vector<vector<int>> question{{1,2,3},{4,5,6},{7,8,9}};
    Solution s1;
    vector<int> answer = s1.zigzagTraversal( question);

    int size = answer.size();
    for(int i=0; i<size; i++){
        cout<<answer[i]<<" ";
    }
    cout<<endl;
    return 0;
}