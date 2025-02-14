class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int size = arr.size();

        if(size == arr[size-1]){
            return arr[size-1] + k;
        }

        int lastElIndex = arr[size-1]-1;
        int missingEl = (arr[size-1]-1) - (size-1);

        // cout<<(arr[size-1]-1)<<" "<<size-1;
        if(k > missingEl){
            return arr[size-1] + (k-missingEl);
        }

        int start = 0, end = size - 1,  mid = 0;

        while(start <= end){
            mid = (start+end)/2;
            int misEl = (arr[mid]-1) - mid;

            if(misEl < k){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }

        return k+end+1;
    }
};