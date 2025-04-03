#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size(), m=mat[0].size();
        int start=0, end=m-1, mid=0, el=0, isans=1, isleft=0, maxel=0;
        vector<int> ans;

        while(start<=end){
            mid=(start+end)/2;
            maxel=-1;

            for(int i=0; i<n; i++){
                el=mat[i][mid];
                isans=1;

                if(mid-1>=0 && mat[i][mid-1]>el){
                    isans=0;
                    if(mat[i][mid-1] > maxel){
                        maxel=mat[i][mid-1];
                        isleft=1;
                    }
                }

                if(isans==1 && mid+1<m && mat[i][mid+1]>el){
                    isans=0;
                    if(mat[i][mid+1] > maxel){
                        maxel=mat[i][mid+1];
                        isleft=0;
                    }
                }

                if(isans==1 && i-1>=0 && mat[i-1][mid]>el){
                    isans=0;
                }

                if(isans==1 && i+1<n && mat[i+1][mid]>el){
                    isans=0;
                }

                if(isans == 1){
                    ans.push_back(i);
                    ans.push_back(mid);
                    break;
                }
            }

            if(isans==1){
                break;
            }else if(isleft == 1){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }

        return ans;
    }
};


int main(){
    Solution s1;
    vector<vector<int>> question{{10,20,15},{21,30,14},{7,16,32}};

    vector<int> answer = s1.findPeakGrid(question);
    for(int i=0; i<2; i++){
        cout<<answer[i]<<" ";
    }
    cout<<endl;
    return 0;
}