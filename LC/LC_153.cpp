#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
 int minElement = 5001;
 int splitedIndex = -1;
public:
    void split(vector<int>& nums, int start, int end){
        if(start>end){
            return;
        }

        int mid = (start + end) / 2;
        int size = nums.size();

        minElement = min(minElement,nums[mid]);

        if(mid-1 >= 0 && nums[mid-1] > nums[mid]){
            splitedIndex = mid;
        }else if(mid+1 < size && nums[mid+1] < nums[mid]){
            splitedIndex = mid + 1;
        }else{
            split(nums,start,mid-1);
            split(nums,mid+1,end);
        }
    }
public:
    int findMin(vector<int>& nums) {
        split(nums,0,nums.size()-1);

        if(splitedIndex != -1){
            minElement = min(minElement,nums[splitedIndex]);
        }
        // cout<<minElement<<endl;
        return minElement;
    }
};

int main(){
    Solution s1;
    vector<int> question{4,5,6,7,0,1,2};

    int answer = s1.findMin(question);

    cout<<answer<<endl;
    return 0;
}