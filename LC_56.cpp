#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    int size = 0;
    sort(intervals.begin(),intervals.end());

    // for(auto i : intervals){
    //     cout<<i[0]<<" "<<i[1]<<endl;
    // }

    vector<vector<int>> answer{intervals[0]};
    for(int i=1; i<intervals.size(); i++){
        size = answer.size() - 1;
        if(answer[size][1] <= intervals[i][0] || answer[size][1] < intervals[i][1]){
            if(intervals[i-1][1] >= answer[size][1]){
                answer[size][1] = intervals[i-1][1];
            }
            
            if(intervals[i][0] > answer[size][1]){
                answer.push_back(intervals[i]);
            }else{
                answer[size][1] = intervals[i][1];
            }
        }
    }

    size = answer.size() - 1;
    // cout<<intervals[intervals.size() - 1][1]<<" s "<< answer[size][1];
    if(intervals[intervals.size() - 1][1] >= answer[size][1]){
        answer[size][1] = intervals[intervals.size() - 1][1];
    }

    return answer;
}

int main(){
    vector<vector<int>> value{{1,3},{2,6},{8,10},{15,18}};

    vector<vector<int>> answer = merge(value);

    for(auto i : answer){
        cout<<i[0]<<" "<<i[1]<<endl;
    }
    return 0;
}