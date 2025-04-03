#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(), n=matrix[0].size();
        int start=0, end=n-1;
        bool ans=false;

        while(start>=0 && end>=0 && start<m && end<n){
            // cout<<start<<" "<<end<<endl;
            
            if(matrix[start][end] == target){
                ans=true;
                break;
            }else if(matrix[start][end] > target){
                end--;
            }else{
                start++;
            }
        }

        return ans;
    }
};


int main(){
    Solution s1;
    vector<vector<int>> question{{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int k = 20;
    bool answer = s1.searchMatrix(question,k);
    cout<<answer<<endl;
    return 0;
}