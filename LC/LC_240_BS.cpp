#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(), n=matrix[0].size();
        int start=0, end=n-1, mid=0;
        bool ans=false;

        for(int i=0; i<m; i++){
            start=0;
            end=n-1;

            while(start<=end){
                mid=(start+end)/2;

                if(matrix[i][mid] == target){
                    ans=true;
                    break;
                }else if(matrix[i][mid] < target){
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }

            if(ans){
                break;
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