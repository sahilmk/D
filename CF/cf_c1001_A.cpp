#include<bits/stdc++.h>

using namespace std;

int findOne(string s){
    int count=0;

    int size = s.size();
    for(int i=0; i<size; i++){
        if(s[i] == '1'){
            count++;
        }
    }

    return count;
}

int main(){
    int t;
    cin>>t;

    vector<int> answer;

    for(int i=0; i<t; i++){
        string temp;
        cin>>temp;

        answer.push_back(findOne(temp));
    }

    for(int i=0; i<t; i++){
        cout<<answer[i]<<endl;
    }

    return 0;
}