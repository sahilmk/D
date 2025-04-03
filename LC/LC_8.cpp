#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int mul = 1, size = s.size(), ans = 0, i = 0, start = -1, temp = 0;

        for(i=0; i<size; i++){
            if(s[i] != ' '){
                break;
            }
        }

        // cout<<"i: "<<i<<endl;

        if(s[i] == '-'){
            mul=mul*-1;
        }
        if(s[i] == '-' || s[i]=='+'){
            ++i;
        }

        // cout<<"i: "<<i<<endl;
        start = i;        

        for(i; i<size; i++){
            if(s[i]<'0' || s[i]>'9'){
                break;
            }
        }

        // cout<<"start: "<<start<<" end: "<<i<<endl;
        if(i != 0 && i > start){
            for(int j=start; j<i; j++){
                int digit = s[j] - '0';

                if(temp > (INT_MAX-digit)/10){
                    return mul==-1 ? INT_MIN : INT_MAX;
                }
                temp = (temp*10) + digit;
                // cout<<temp<<endl;
            }
        }
        ans = mul==-1 ? temp*-1 : temp;

        return ans;
    }
};

int main(){
    string question = "1337c0d3";
    Solution s;
    int answer = s.myAtoi(question);
    cout<<answer<<endl;
    return 0;
}