//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int partition = 0;
  public:
    void findPartition(vector<int> &arr, int start, int end){
        if(start > end){
            return;
        }
        
        if(arr[start] < arr[end]){
            return;
        }
        
        int mid = (start + end) / 2;
        // cout<<start<<" mid: "<<mid<<" "<<end<<"\n";
        
        if(arr[start] > arr[mid]){
            partition  = mid;
            findPartition(arr,start,mid);    
        }else if(arr[mid+1] > arr[end]){
            partition = mid+2;
            findPartition(arr,mid+1,end);
        }else if(start != end){
            partition = mid+1;
        }
    }
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        findPartition(arr,0,arr.size()-1);
        // cout<<partition<<"\n";
        
        return partition;
    }
};


//{ Driver Code Starts.

int main() {
        vector<int> arr{1, 2, 3, 4, 5};
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
}

// } Driver Code Ends