#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int size = nums.size();
        int sum = 0;
        
        for(int i=0; i<size; i++){
            int start = max(0,i-nums[i]);

            for(int j=start; j<=i; j++){
                sum+=nums[j];        
            }
        }

        return sum;
    }
};



int main(){
    vector<int> question{2,3,6};

    Solution s1;
    int answer = s1.subarraySum(question);
    cout<<answer<<endl;
    return 0;
}