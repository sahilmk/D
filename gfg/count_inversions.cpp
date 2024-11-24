#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int count = 0;
    public:
        void mergesort(vector<int> &arr, int start, int end){
            if(start>=end){
                return;
            }
            
            int mid = (start+end)/2;
            
            mergesort(arr,start,mid);
            mergesort(arr,mid+1,end);
            
            vector<int>  larr,rarr;
            int ls = 0;
            int le = 0;
            int k = start;
            
            for(int i=start; i<=mid; i++){
                larr.push_back(arr[i]);
            }
            
            for(int i=mid+1; i<=end; i++){
                rarr.push_back(arr[i]);
            }
            
            // cout<<"left: ";
            // for(int i=0; i<larr.size(); i++){
            //     cout<<larr[i]<<" ";
            // }
            // cout<<endl<<"right: ";
            // for(int i=0; i<rarr.size(); i++){
            //     cout<<rarr[i]<<" ";
            // }
            // cout<<endl;
            // cout<<ls<<" mid:"<<mid<<" le:"<<le<<" end:"<<end<<" K:"<<k<<endl;
            
            while(ls<larr.size() && le<rarr.size()){
                if(larr[ls] <= rarr[le]){
                    arr[k++] = larr[ls++];
                }else{
                    arr[k++] = rarr[le++];
                    count++;
                }
            }
            
            int inside = 0;
            while(ls<larr.size()){
                inside = 1;
                arr[k++] = larr[ls++];
            }
            
            if(inside){
                count++;
            }
            
            while(le<rarr.size()){
                arr[k++] = rarr[le++];
            }
            
            // cout<<"left: ";
            // for(auto i:larr){
            //     cout<<i<<" ";
            // }
            // cout<<" right: ";
            // for(auto i:rarr){
            //     cout<<i<<" ";
            // }
            // cout<<" result: ";
            // for(auto i:arr){
            //     cout<<i<<" ";
            // }
            // cout<<endl;
        }
  public:
    // Function to count inversions in the array.
    int inversionCount(vector<int> &arr) {
        // Your Code Here
        mergesort(arr,0,arr.size()-1);
        
        for(auto i:arr){
            cout<<i<<" ";
        }
        cout<<endl<<"count: "<<count;
        cout<<endl;
        return count;
    }
};

int main(){
    Solution s1;
    vector<int> question{5,4,3,2,1};
    int inversions = s1.inversionCount(question);

    cout<<inversions;
    return 0;
}