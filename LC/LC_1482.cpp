#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int calculateDays(vector<int>& bloomDay, int m, int k, int mid){
        vector<int> localBD = bloomDay;
        int size = bloomDay.size();

        for(int i=0; i<size; i++){
            if(bloomDay[i] == mid){
                localBD[i] = 0;
            }else{
                localBD[i] = floor(double(bloomDay[i])/double(mid));
            }
            // cout<<localBD[i]<<" ";
        }
        // cout<<"mid: "<<mid<<endl;

        int possibleB = 0;
        int localB = 0;
        for(int i=0; i<size; i++){

            // cout<<"i: "<<i;
            if(localBD[i] == 0){
                if(localB == k){
                    possibleB++;
                    localB=1;
                }else{
                    localB++;
                }
            }else{
                if(localB == k){
                    possibleB++;
                }
                localB = 0;
            }
            // cout<<" i:"<<i<<" b:"<<possibleB<<endl;
        }
        if(localB == k){
            possibleB++;
        }

        if(possibleB >= m){
            return 1;
        }

        return 0;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int size = bloomDay.size();
        // cout<<"size: "<<size<<endl;
        long long totalF = 1LL*m*k;

        if(totalF > size){
            return -1;
        }

        int minEl = *min_element(bloomDay.begin(),bloomDay.end());
        int maxEl = *max_element(bloomDay.begin(),bloomDay.end());

        int start = minEl;
        int end = maxEl, mid = 0,resultedDays=0,answer=-1;
        // cout<<"min: "<<minEl<<" max: "<<maxEl<<endl;
        while(start <= end){
            mid = (start+end)/2;
            resultedDays = calculateDays(bloomDay,m,k,mid);
            
            if(resultedDays == 0){
                start = mid+1;
            }else{
                if(answer == -1){
                    answer = mid;
                }else{
                    answer = min(answer,mid);
                }
                end = mid-1;
            }
            // cout<<answer<<endl;
        }

        return answer;
    }
};

int main(){
    Solution s1;

    vector<int> question{1,10,3,10,2};
    int m = 3, k = 1;

    int answer = s1.minDays(question,m,k);
    cout<<answer<<endl;
    return 0;
}