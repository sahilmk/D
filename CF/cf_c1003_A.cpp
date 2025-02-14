#include<bits/stdc++.h>

using namespace std;

string convertToPlural(string s){
    int size = s.size();
    string answer = "";
    for(int i=0; i<size; i++){
        if((i+1)==size-1 && s[i]=='u'&&s[i+1]=='s'){
            answer+='i';
            i++;
        }else{
            answer+=s[i];
        }
    }

    return answer;
}

int main(){
    int t;
    cin>>t;
    vector<string> answer;
    for(int i=0; i<t; i++){
        string s;
        cin>>s;

        answer.push_back(convertToPlural(s));
    }

    int size = answer.size();
    for(int i=0; i<size; i++){
        cout<<answer[i]<<endl;
    }
    return 0;
}