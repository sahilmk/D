#include<bits/stdc++.h>

using namespace std;

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        int floor = -1;
        int ceil  = 0;
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i] <= x && arr[i] > floor){
                floor = arr[i];
            }
            
            if(arr[i] >= x){
                if(ceil == 0){
                    ceil = arr[i];
                }else if(arr[i] < ceil){
                    ceil = arr[i];
                }
            }
        }
        
        if(ceil == 0){
            ceil = -1;
        }
        
        return {floor,ceil};
    }
};

int main(){
    vector<int> question{5, 6, 8, 8, 6, 5, 5, 6};
    Solution s;

    vector<int> answer = s.getFloorAndCeil(10,question);

    for(auto i : answer){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}