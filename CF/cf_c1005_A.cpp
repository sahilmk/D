#include<bits/stdc++.h>

using namespace std;

int brogramming(string s){
    int ans = 0, p = 1, size = s.size();
    char lc = s[0];
    if(s[0]=='1'){
        ans++;
    }

    while(p < size){
        if(s[p]!=lc){
            ans++;
            lc = s[p];
        }

        p++;
    }

    return ans;
}

int main(){
    int t;
    cin>>t;
    vector<int> answer;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        string s;
        cin>>s;

        answer.push_back(brogramming(s));
    }

    int size = answer.size();
    for(int i=0; i<size; i++){
        cout<<answer[i]<<endl;
    }
    return 0;
}