#include<bits/stdc++.h>

using namespace std;

int bsearch(vector<int>& nums, int start, int end, int target){
        int mid = (start+end)/2;

        if(nums[mid] == target){
            return mid;
        }

        if(start > end){
            return -1;
        }

        if(target < nums[mid]){
            return bsearch(nums,start,mid-1,target);
        }else{
            return bsearch(nums,mid+1,end,target);
        }
    }

int main(){
    vector<int> question{-1,0,3,5,9,12};
    int answer = bsearch(question,0,question.size()-1,-2);

    cout<<answer<<endl;
    return 0;
}