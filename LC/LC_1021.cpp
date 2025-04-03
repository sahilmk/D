#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int size = s.size(), count = 0, start=0;

        for(int i=0; i<size; i++){
            if(s[i] == '('){
                count++;
            }else if(s[i] == ')'){
                count--;
            }

            if(count == 0){
                for(int j=start+1; j<i; j++){
                    ans+=s[j];
                }
                start = i+1;
            }
            // cout<<start<<" "<<i<<endl;
        }

        return ans;
    }
};


int main(){
    Solution s;
    string question = "(()())(())";

    string answer = s.removeOuterParentheses(question);
    
    cout<<answer<<endl;
    return 0;
}