#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int splitIndex = -1;
    bool answer = false;
public:
    void findIndex(vector<int>& nums, int start, int end){
        if(start > end){
            return;
        }

        int mid = (start + end) / 2;
        int size = nums.size();

        if(mid-1 >= 0 && nums[mid-1] > nums[mid]){
            splitIndex = mid;
        }else if(mid+1 < size && nums[mid+1] < nums[mid]){
            splitIndex = mid+1;
        }else{
            findIndex(nums,start,mid-1);
            findIndex(nums,mid+1,end);
        }
    }
public:
    void findValue(vector<int>& nums, int start, int end, int target){
        if(start>end){
            return;
        }

        int mid = (start + end) / 2;

        if(nums[mid] == target){
            answer = true;
        }else if(nums[mid] > target){
            findValue(nums,start,mid-1,target);
        }else{
            findValue(nums,mid+1,end,target);
        }
    }
public:
    bool search(vector<int>& nums, int target) {
        findIndex(nums,0,nums.size()-1);
        // cout<<splitIndex;

        if(splitIndex != -1){
            findValue(nums,0,splitIndex-1,target);
            findValue(nums,splitIndex,nums.size()-1,target);
        }else{
            findValue(nums,0,nums.size()-1,target);
        }

        return answer;
    }
};

int main(){
    Solution s1;
    vector<int> question{4,5,6,6,7,0,1,2,4,4};
    int target = 4;
    bool answer = s1.search(question,target);

    cout<<answer<<endl;
    return 0;
}