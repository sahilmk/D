#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n=arr.size(), m=arr[0].size(), maxOne=-1, ans=-1;
        // cout<<n<<" "<<m<<endl;
        
        for(int i=0; i<n; i++){
            int start=0, end=m-1,  mid=0, zeroIn=-1;
            
            while(start<=end){
                mid=(start+end)/2;
                
                if(arr[i][mid] == 0){
                    zeroIn=mid;
                    // cout<<start<<" "<<mid<<" "<<end<<" "<<zeroIn<<endl;
                    start=mid+1;
                }else{
                    // cout<<start<<" "<<mid<<" "<<end<<" "<<zeroIn<<endl;
                    end=mid-1;
                }
            }
            
            if(zeroIn==-1){
                ans=i;
                break;
            }else if(m-zeroIn-1!=0 && m-zeroIn-1 > maxOne){
                maxOne=m-zeroIn-1;
                ans=i;
            }
            
            // cout<<"mid: "<<zeroIn<<" "<<ans<<" "<<maxOne<<endl;
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