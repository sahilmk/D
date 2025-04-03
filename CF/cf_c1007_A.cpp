#include<bits/stdc++.h>

using namespace std;

string brogramming(int k){
    string ans = "yes";
    
    if(k%3 != 1){
        ans = "no";
    }

    return ans;
}

int main(){
    int t;
    cin>>t;
    vector<string> answer;
    for(int i=0; i<t; i++){
        int k;
        cin>>k;

        answer.push_back(brogramming(k));
    }

    int size = answer.size();
    for(int i=0; i<size; i++){
        cout<<answer[i]<<endl;
    }
    return 0;
}