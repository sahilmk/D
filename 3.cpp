#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> occ;
        int maxLength = 0;
        cout<<occ['a'];
        for(int i=0; i<s.size(); i++){
            if(occ[s[i]] == 1){
                int size = occ.size();
                maxLength = max(maxLength, size);
                occ.clear();
            }else{
                occ[s[i]]++;
            }
        }
        return maxLength;
    }
};

int main(){
    Solution sv;
    int maxLength = sv.lengthOfLongestSubstring("abcabcbb");
}