#include<bits/stdc++.h>

using namespace std;

pair<int,int> brogramming(vector<int> arr){
    int ans = 0, p = 1, size = arr.size();
    pair<int,int> answer;
    map<int,int> vari;

    for(int i=0; i<size; i++){
        vari[arr[i]]++;
    }

    return answer;
}

int main(){
    int t;
    cin>>t;
    vector<pair<int,int>> answer;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int> temp;
        for(int j=0; j<n; j++){
            int tp;
            cin>>tp;
            temp.push_back(tp);
        }

        answer.push_back(brogramming(temp));
    }

    int size = answer.size();
    for(int i=0; i<size; i++){
        if(answer[i].first ==0 && answer[i].second ==0){
            cout<<"0"<<endl;
        }else{
            cout<<answer[i].first<<" "<<answer[i].second<<endl;
        }
    }
    return 0;
}