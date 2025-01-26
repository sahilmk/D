#include<stdio.h>

void split(int arr[], int start, int end, int target, int *val1, int *val2, int n){
    if(start>end){
        return;
    }
    
    int mid = (start+end)/2;
    
    if(arr[mid] == target){
        if(mid > *val2){
            *val2 = mid;
        }
        
        if(*val1 == -1 || mid < *val1){
            *val1 = mid;
        }
        
        if(mid-1 > -1 && mid+1 < n && arr[mid-1] == target && arr[mid+1] == target){
            split(arr,start,mid-1,target,val1,val2,n);
            split(arr,mid+1,end,target,val1,val2,n);
        }else if(mid-1 > -1 && arr[mid-1] == target){
            split(arr,start,mid-1,target,val1,val2,n);
        }else if(mid+1 < n && arr[mid+1] == target){
            split(arr,mid+1,end,target,val1,val2,n);
        }
        
    }else if(arr[mid] > target){
        split(arr,start,mid-1,target,val1,val2,n);
    }else{
        split(arr,mid+1,end,target,val1,val2,n);
    }
}

// Function to count the number of occurrences of target in an array
int countFreq(int arr[], int n, int target) {
    // code here..
    int val1 = -1;
    int val2 = -1;
    split(arr,0,n-1,target,&val1,&val2,n);
    // printf("start:%d end:%d\n",val1,val2);
    
    if(val1 != -1 && val2 != -1){
        return (val2-val1)+1;
    }
    
    return 0;
}


int main() {
    int arr = {1, 1, 2, 2, 2, 2, 3};
    int answer = countFreq(arr,7,2);

    printf("%d",answer);
    return 0; // Return 0 to indicate successful execution
}
// } Driver Code Ends