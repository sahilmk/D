#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        bool rotateString(string s, string goal) {
            int size = s.size(), i=0, gsize = goal.size();
            if(size!=gsize){
                return false;
            }
            bool ans = false;
            string doubleS = s+s;
    
            int index = doubleS.find(goal);
            // cout<<index;
    
            return index > -1;
        }
    };

int main(){
    string question1 = "abcde", question2 = "cdeab";
    Solution s;
    bool answer = s.rotateString(question1,question2);
    cout<<answer<<endl;
    return 0;
}