#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int answer = 0;
    void findRecur(vector<int>& nums, int start, int end){
        if(start >= end){
            return;
        }

        int mid = (start + end) / 2;
        // cout<<"start: "<<start<<" mid: "<<mid<<" end: "<<end<<endl;
        if(mid%2 != 0){
            mid--;
        }

        if(nums[mid] == nums[mid+1]){
            answer = mid+2;
            findRecur(nums,mid+2,end);
        }else{
            findRecur(nums,start,mid);
        }
    }
public:
    int singleNonDuplicate(vector<int>& nums) {
        findRecur(nums,0,nums.size()-1);

        return nums[answer];
    }
};

int main(){
    Solution s;
    // vector<int> question{10,10};
    vector<int> question{3,3,7,7,10,11,11};

    int answer = s.singleNonDuplicate(question);
    cout<<answer<<endl;
    return 0;
}