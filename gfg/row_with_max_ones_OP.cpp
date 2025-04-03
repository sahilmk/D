#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n=arr.size(), m=arr[0].size(), ans=-1;
        int j=m-1;
        
        for(int i=0; i<n; i++){
            while(j>=0){
                if(arr[i][j] == 0){
                    break;
                }
                ans=i;
                j--;
            }
        }
        
        return ans;
    }
};


int main() {
    Solution s1;

    // vector<vector<int>> question{{0,1,1,1},{0,0,1,1},{1,1,1,1},{0,0,0,0}};
    vector<vector<int>> question{{0,0},{0,0}};

    int index = s1.rowWithMax1s(question);
    cout<<index<<endl;
    return 0;
}

// } Driver Code Ends