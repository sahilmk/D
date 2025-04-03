#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            int size = strs.size(), i=0, j=0, shortestPS=200;
            string shortS = "", ans="";
    
            for(i=0; i<size; i++){
                if(strs[i].size() < shortS.size() || shortS==""){
                    shortS = strs[i];
                }
            }
    
            shortestPS=shortS.size()-1;
            // cout<<shortS<<" "<<shortestPS<<endl;
    
            for(i=0; i<size; i++){
                for(j=0; j<shortS.size(); j++){
                    if(strs[i][j] != shortS[j]){
                        shortestPS = min(shortestPS,j-1);
                    }
                }
            }
            // cout<<shortestPS<<endl;
    
            for(i=0; i<=shortestPS; i++){
                ans+=shortS[i];
            }
            return ans;
        }
    };

int main(){
    vector<string> question{"flower","flow","flight"};
    Solution s;
    string answer = s.longestCommonPrefix(question);
    cout<<answer<<endl;
    return 0;
}