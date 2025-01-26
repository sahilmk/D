#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    int nthRoot(int n, int m) {
        int start=0,end=m-1,mid=0;
        int answer = -1;
        
        while(start<=end){
            mid = (start + end) / 2;
            
            long long check = 1;
            for(int i=0; i<n; i++){
                check*=(mid+1);

                if(check > m){
                    break;
                }
            }
            
            // cout<<" start: "<<start<<" end: "<<end<<" mid: "<<mid<<" check: "<<check<<endl;
            if(check == m){
                answer = mid+1;
                break;
            }else if(check > m){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        
        return answer;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        int ans = ob.nthRoot(n, m);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}