#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        bool isIsomorphic(string s, string t) {
            int sizeS=s.size(), sizeT=t.size(), i=0;
            map<char,char> mapping;
            map<char,char> reverseMapping;
            bool ans = true;
    
            if(sizeS!=sizeT){
                return false;
            }else{
                for(i=0; i<sizeS; i++){
                    if(mapping[s[i]] == 0 && reverseMapping[t[i]] == 0){
                        mapping[s[i]] = t[i];
                        reverseMapping[t[i]] = s[i];
                    }else if(mapping[s[i]] != t[i] || reverseMapping[t[i]] != s[i]){
                        ans=false;
                        break;
                    }
                }
            }
    
            return ans;
        }
    };

int main(){
    string question1 = "badc", question2="baba";
    Solution s;
    bool answer = s.isIsomorphic(question1,question2);
    cout<<answer<<endl;
    return 0;
}