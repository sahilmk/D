#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(), n=matrix[0].size();
        int start=0, end=(m*n)-1, mid=0;
        bool ans=0;
        int row=0, column=0;

        while(start<=end){
            mid=(start+end)/2;

            row=floor(mid/n);
            column=mid%n;
            // cout<<start<<" "<<mid<<" "<<end<<" "<<row<<" "<<column<<endl;

            if(matrix[row][column] == target){
                ans = 1;
                break;
            }else if(matrix[row][column] < target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }

        return ans;
    }
};


int main(){
    Solution s1;
    vector<vector<int>> question{{1,3,5,7},{10,11,16,20},{23,40,34,60}};
    int k = 16;

    int answer = s1.searchMatrix(question,k);

    cout<<answer<<endl;
    return 0;
}