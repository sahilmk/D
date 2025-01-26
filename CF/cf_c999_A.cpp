
#include<bits/stdc++.h>

using namespace std;

int calculatePoint(int n, vector<long long> question){
    vector<long long> even,odd;

    for(int i=0; i<n; i++){
        if(question[i]%2 == 0){
            even.push_back(question[i]);
        }else{
            odd.push_back(question[i]);
        }
    }

    even.insert(even.end(),odd.begin(),odd.end());

    int sum = 0;
    int point = 0;

    for(int i=0; i<n; i++){
        sum+=even[i];

        if(sum%2 == 0){
            // while(sum%2==0){
            //     sum/=2;
            //     cout<<question[i]<<" "<<sum<<endl;
            // }
            sum+=1;
            point+=1;
        }
        // cout<<question[i]<<" "<<point<<endl;        
    }

    return point;
}

int main(){
    int t;
    cin>>t;

    vector<int> answer;

    for(int i=0; i<t; i++){
        int n,lAnswer;
        cin>>n;

        vector<long long> question;
        long temp;
        for(int j=0; j<n; j++){
            cin>>temp;
            question.push_back(temp);
        }

        lAnswer = calculatePoint(n,question);
        answer.push_back(lAnswer);
    }

    int size = answer.size();
    for(int i=0; i<size; i++){
        cout<<answer[i]<<endl;
    }
    return 0;
}