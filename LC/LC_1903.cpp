#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        string largestOddNumber(string num) {
            int size = num.size(), i=0, end=-1;
            string ans="";
    
            for(i=size-1; i>-1; i--){
                if(int(num[i])%2 == 1){
                    end=i;
                    break;
                }
            }
    
            if(end==-1){
                return ans;
            }else{
                for(i=0; i<=end; i++){
                    ans+=num[i];
                }
                return ans;
            }
        }
    };

int main(){
    string question = "10133890";
    Solution s;
    string answer = s.largestOddNumber(question);
    cout<<answer<<endl;
    return 0;
}