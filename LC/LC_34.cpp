#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int op1 = -1;
    int op2 = -1;
public:
    void split(vector<int>& nums, int start, int end, int target){
        if(start > end){
            return;
        }

        int mid = (start+end)/2;

            // cout<<"start "<<start<<" end "<<end<<" mid "<<mid<<endl;
        if(nums[mid] == target){
            if(op1 == -1 || op1 > mid){
                op1 = mid;
            }

            if(op2 < mid){
                op2 = mid;
            }

            if(mid+1 <= nums.size()-1 && mid-1 > -1 && nums[mid+1] == target && nums[mid-1] == target){
                split(nums,start,mid-1,target);
                split(nums,mid+1,end,target);
            }else if(mid+1 < nums.size() && nums[mid+1] == target){
                split(nums,mid+1,end,target);
            }else if(mid-1 >= 0 && nums[mid-1] == target){
                split(nums,start,mid-1,target);
            }

        }else if(nums[mid] < target){
            split(nums,mid+1,end,target);

        }else{
            split(nums,start,mid-1,target);
        }
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        split(nums,0,nums.size()-1,target);

        vector<int> answer;
        answer.push_back(op1);
        answer.push_back(op2);
        return answer;
    }
};

int main(){
    Solution s1;
    vector<int> question{6,6,7,8,9,10};
    // vector<int> question{1};
    vector<int> answer = s1.searchRange(question,6);

    for(auto i: answer){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}