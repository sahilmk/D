#include<bits/stdc++.h>

using namespace std;

class Solution {
  public:
    int index = -1;
  public:
    void findIndex(vector<int>& arr, int start, int end, int k){
        if(start > end){
            return;
        }
        
        int mid = (start+end)/2;
        
        if(arr[mid] <= k && mid>index){
            index = mid;
        }
        
        if(k > arr[mid]){
            findIndex(arr,mid+1,end,k);
        }else{
            findIndex(arr,start,mid-1,k);
        }
        
    }
  public:

    int findFloor(vector<int>& arr, int k) {

        // Your code here
        findIndex(arr,0,arr.size()-1,k);
        
        return index;
    }
};

int main(){
    Solution s;
    vector<int> question{1, 2, 8, 10, 11, 12, 19};

    int answer = s.findFloor(question,1);
    cout<<answer<<endl;

    return 0;
}