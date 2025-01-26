#include<bits/stdc++.h>

using namespace std;

int minCo(pair<int,int> question){
    cout<<"Pair: "<<question.first<<" "<<question.second<<endl;
    map<int,int> pi;

    int count = 0;
    for(int i=question.first; i<=question.second; i++){
        for(int j=question.first; j<question.second; j++){
            int a = i;
            int b = j;
            int r = 0;
            
            while(b > 0){
                int q = a/b;

                r = a - q*b;
                a=b;
                b=r;
            }

            if(a == 1 && pi[i] != 1){
                cout<<i<<" "<<j<<endl;
                count+=1;
                pi[i] = 1;
            }
        }
    }

    return count;
}

int main(){
    int t;
    cin>>t;

    vector<int> answer;
    for(int i=0; i<t; i++){
        pair<int,int> temp;

        cin>>temp.first;
        cin>>temp.second;

        answer.push_back(minCo(temp));
    }

    int size = answer.size();
    for(int i=0; i<size; i++){
        cout<<answer[i]<<endl;
    }
    return 0;
}