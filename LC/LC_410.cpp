#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int maxEl = *max_element(nums.begin(),nums.end()), n = nums.size(), i=0;
        if(k == n){
            return maxEl;
        }

        long long end = 0, start = maxEl, mid = 0, sum = 0;

        for(i=0; i<n; i++){
            end+=nums[i];
        }

        int answer = -1, localSA = 0;

        while(start <= end){
            mid = (start + end) / 2;
            
            sum = 0;
            localSA = 0;
            for(i=0; i<n; i++){
                if(sum+nums[i] > mid){
                    localSA++;
                    sum = nums[i];
                }else{
                    sum+=nums[i];
                }
            }

            if(sum>0){
                localSA++;
            }

            if(localSA == k && (answer == -1 || mid<answer) ){
                answer = mid;
            }

            cout<<"start: "<<start<<" mid: "<<mid<<" end: "<<end<<" localSA: "<<localSA<<endl;

            if(localSA <= k){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }

        if(answer == -1){
            return maxEl;
        }
        return answer;
    }
};


int main(){
    vector<int> question{2,3,1,1,1,1,1};
    int k = 5;
    Solution s1;

    int answer = s1.splitArray(question,k);
    cout<<answer<<endl; 
    return 0;
}