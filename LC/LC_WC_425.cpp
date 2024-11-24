#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minSum = 0;
        int tempSum = 0;
        int size = nums.size();

        int start = 0;
        int end = l-1;
        while(end < size){
            tempSum = 0;
            for(int i=start; i<=end; i++){
                tempSum += nums[i];
            }

            if(minSum == 0){
                minSum = tempSum;
            }else if(minSum > 0){
                minSum = min(minSum,tempSum);
            }

            start++;
            end++;
        }

        if(minSum = 0){
            return -1;
        }else {
            return minSum;
        }
    }
};

int main(){
    Solution s;
    vector<int> question{3, -2, 1, 4};
    int l = 2;
    int r = 3;

    cout<<s.minimumSumSubarray(question,l,r)<<endl;

    return 0;
}