#include<bits/stdc++.h>

using namespace std;

int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    int maxEl = *max_element(arr.begin(),arr.end()); 

    if(n < m){
        return -1;
    }else if(n == m){
        return maxEl;
    }else{
        long long sum = 0, start = maxEl, end = 0, mid = 0;
        int totalStudent = 0;

        for(int i=0; i<n; i++){
            end+=arr[i];
        }

        int answer = end;
        
        while(start <= end){
            totalStudent = 0;
            sum = 0;
            mid = (start + end) / 2;
            for(int i=0; i<n; i++){
                if(sum+arr[i] > mid){
                    totalStudent++;
                    sum = arr[i];
                }else{
                    sum+=arr[i];
                }
            }

            if(sum > 0){
                totalStudent++;
            }

            // cout<<"start: "<<start<<" mid: "<<mid<<" end: "<<end<<" student: "<<totalStudent<<endl;
            if(totalStudent <= m){
                if(mid < answer ){
                    answer = mid;
                }
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }

        return answer;
    }
}

int main(){
    vector<int> question {12,34,67,90};
    int n = question.size() , m = 2;

    int answer = findPages(question,n,m);

    cout<<answer<<endl;
    return 0;
}