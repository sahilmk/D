#include<bits/stdc++.h>

using namespace std;

int calculateLatters(string s){
    int size = s.size();

    int count = 0;
    for(int i=0; i<size; i++){
        if((i+1)<size && s[i]==s[i+1]){
            while((i+1)<size && s[i]==s[i+1]){
                i++;
            }
            // cout<<"i"<<i<<endl;
            count = 1;
        }else{
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
        string s;
        cin>>s;

        answer.push_back(calculateLatters(s));
    }

    int size = answer.size();
    for(int i=0; i<size; i++){
        cout<<answer[i]<<endl;
    }
    return 0;
}