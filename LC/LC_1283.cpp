
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int summation(vector<int>& nums, int divisor){
        int size = nums.size();
        int sum = 0;

        for(int i=0; i<size; i++){
            sum+=ceil(double(nums[i])/double(divisor));
        }

        // cout<<"mid: "<<divisor<<" sum: "<<sum<<endl;
        return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxEl = *max_element(nums.begin(),nums.end()), size = nums.size();

        if(size == threshold){
            return maxEl;
        }

        if(size == 1){
            return ceil(double(nums[0])/double(threshold));
        }
        long long summ = 0;
        for(int i=0; i<size; i++){
            summ+=nums[i];
        }

        if(summ < threshold){
            return 1;
        }
        // int divi = summ/threshold;

        int answer = maxEl,start = 1, end = maxEl, mid = 0, sum = 0;

        // cout<<"start: "<<start<<endl;

        while(start <= end){
            mid = (start + end) / 2;

            sum =  summation(nums,mid);

            if(sum>threshold){
                start = mid+1;
            }else{
                answer = min(answer,mid);
                end = mid-1;
            }
        }

        return answer;
    }
};

int main(){
    Solution s1;
    vector<int> question{91,41,78,86,8};
    int threshold = 114;

    int answer = s1.smallestDivisor(question,threshold);
    cout<<answer<<endl;
    return 0;
}