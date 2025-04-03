#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        bool isAnagram(string s, string t) {
            map<char,int> smap;
            int ssize=s.size(), tsize=t.size(), i=0;
            bool ans = true;
    
            if(ssize != tsize){
                return !ans;
            }else{
                for(i=0; i<ssize; i++){
                    smap[s[i]]++;
                }
    
                for(i=0; i<tsize; i++){
                    if(smap[t[i]] == 0){
                        ans = false;
                        break;
                    }else{
                        smap[t[i]]--;
                    }
                }
    
                return ans;
            }
        }
    };

int main(){
    string question1 = "anagram";
    string questino2 = "nagaram";
    Solution s;

    bool answer = s.isAnagram(question1,questino2);
    cout<<answer<<endl;
    return 0;
}