#include<bits/stdc++.h>

using namespace std;

 vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> answer;
    // map<int,int> sum;
    int size = nums.size();
    // cout<<"th siaze: "<<size<<endl;

    for(int i=0; i<size; i++){
        // int summation = 0;
        for(int j=i; j<size; j++){
            for(int k=j; k<size; k++){
                if((nums[i]+nums[j]+nums[k]) == 0 && i!=j && j!=k){
                    vector<int> temp{nums[i],nums[j],nums[k]};
                    sort(temp.begin(), temp.end());
                    int matched = 0;

                    for(int i=0; i<answer.size(); i++){
                        if(equal(answer[i].begin(),answer[i].end(),temp.begin())){
                            matched = 1;
                        }
                    }
                    
                    if(matched == 0){
                        answer.push_back(temp);
                    }
                }
            }
        }
    }
    // cout<<"for completed"<<endl;
    return answer;
}

int main(){
    vector<int> nums{-1,0,1,2,-1,-4};

    vector<vector<int>> answer = threeSum(nums);
    int size = answer.size();
    // cout<<"answer size: "<<size<<endl;
    
    for(int i=0; i<size; i++){
        for(int j=0; j<3; j++){
            cout<<answer[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}