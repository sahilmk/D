#include<bits/stdc++.h>

using namespace std;

class Solution {
  public:
    int floorSqrt(int n) {
        int answer = 0;
        int start = 0;
        int end = n-1;
        int mid = 0, square = 0;
        
        while(start <= end){
            mid = (start + end) / 2;
            
            square = (mid+1)*(mid+1);
            
            // cout<<"start: "<<start<<" end: "<<end<<" mid: "<<mid<<" answer: "<<answer<<endl;
            if(square == n){
                answer = mid+1;
                break;
            }else if(square > n){
                    end = mid-1;
            }else{
                answer = max(answer,mid+1);
                start = mid+1;
            }
        }
        
        return answer;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}