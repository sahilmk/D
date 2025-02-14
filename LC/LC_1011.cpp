#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxEl = *max_element(weights.begin(),weights.end()), size = weights.size(), sumOfWeight = 0, i = 0;

        if(size == days){
            return maxEl;
        }

        for(i=0; i<size; i++){
            sumOfWeight+=weights[i];
        }

        int start = maxEl, end = sumOfWeight, mid = 0, localDays = 0, weightSum = 0, answer = sumOfWeight;

        while(start <= end){
            mid = (start+end)/2;
            // cout<<start<<" "<<mid<<" "<<end<<endl;
            localDays = 0;
            weightSum = 0;

            for(i=0; i<size; i++){
                if((weightSum+weights[i]) > mid){
                    // cout<<weights[i]<<endl;
                    localDays++;
                    weightSum = weights[i];
                }else{
                    weightSum+=weights[i];
                }
            }

            if(weightSum > 0){
                localDays++;
            }

            // cout<<" localDays: "<<localDays<<endl;

            if(localDays <= days && mid<answer){
                answer = mid;
            }

            if(localDays <= days){
                end = mid-1;
            }else{
                start = mid + 1;
            }
        }
        return answer;
    }
};

int main(){
    vector<int> question{1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    Solution s1;

    int answer = s1.shipWithinDays(question,days);
    cout<<answer<<endl;
    return 0;
}