#include<bits/stdc++.h>

using namespace std;

string getColock(vector<int> question){
    int size = question.size();

    int breaked = 0;
    // cout<<"distance: ";
    for(int i=0; i<size; i++){
        int distance = max(i-0,size-i-1);
        // cout<<distance<<" ";

        if(question[i] <= distance*2){
            breaked = 1;
            break;
        }
    }
    // cout<<endl;

    if(breaked == 0){
        return "YES";
    }else {
        return "NO";
    }
}

int main(){
    int t;
    cin>>t;

    vector<string> answer;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;

        vector<int> question;

        for(int j=0; j<n; j++){
            int temp;
            cin>>temp;

            question.push_back(temp);
        }

        answer.push_back(getColock(question));
    }


    for(int i=0; i<t; i++){
        cout<<answer[i]<<endl;
    }
    return 0;
}