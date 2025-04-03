#include<bits/stdc++.h>

using namespace std
;
class Solution {
public:
    string reverseWords(string s) {
        int size = s.size(), i=0;
        string temp = "", ans="";
        vector<string> tempv;

        for(i=size-1; i>-1; i--){
            if(s[i]==' '){
                if(temp!=""){
                    tempv.push_back(temp);
                }
                temp="";
            }else{
                temp=s[i]+temp;
            }
        }

        if(temp!=""){
            tempv.push_back(temp);
        }

        for(i=0; i<tempv.size(); i++){
            if(ans != ""){
                ans+=" ";
            }
            ans+=tempv[i];
        }


        return ans;
    }
};


int main(){
    string question = "  a   sahil kanjariya   hello";
    Solution s;
    string answer = s.reverseWords(question);
    cout<<answer<<endl;
    return 0;
}