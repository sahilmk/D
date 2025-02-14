#include<bits/stdc++.h>

using namespace std;

string checkNumber(pair<int,int> s) {
    string ans = "NO";

    int temp = s.first+1, sum = 0, temp2 = s.second, sum2 = 0;

    if(s.first+1 == s.second){
        return "YES";
    }

    while(temp>0){
        sum+=temp%10;
        temp=temp/10;
    }
    cout<<s.first<<" "<<s.second<<" Sum: "<<sum<<endl;
    if(sum == s.second){
        return "YES";
    }

    temp2 = sum;
    while(temp2>0){
        sum2+=temp2%10;
        temp2/=10;
    }

    cout<<s.first<<" "<<s.second<<" Sum2: "<<sum2<<endl;
    if(sum2 == s.second){
        return "YES";
    }

    return ans;
}

int main(){
    int t;
    cin>>t;
    vector<string> answer;
    for(int i=0; i<t; i++){
        pair<int,int> s;
        cin>>s.first;
        cin>>s.second;

        answer.push_back(checkNumber(s));
    }

    int size = answer.size();
    for(int i=0; i<size; i++){
        cout<<answer[i]<<endl;
    }
    return 0;
}