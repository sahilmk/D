#include<bits/stdc++.h>

using namespace std;

vector<int> brogramming(int k){
    vector<int> ans;
    map<int,int> checked;
    long long sum = 0;
    for(int i=1; i<=k; i++){
        sum+=i;
    }

    long long num = sqrt(sum);

    if(num*num == sum){ 
        return {-1};
    }

    long long insum=0, tempsum=sum;
    while(tempsum!=0){
        // cout<<"sum: "<<tempsum<<endl;
        for(int i=1; i<=k; i++){
            num = floor(sqrt(insum+i));
            if(checked[i] != 1 && num*num != insum+i){
                ans.push_back(i);
                tempsum-=i;
                insum+=i;
                checked[i] = 1;
            }
        }
    }

    return ans;
}

int main(){
    int t;
    cin>>t;
    vector<vector<int>> answer;
    for(int i=0; i<t; i++){
        int k;
        cin>>k;

        answer.push_back(brogramming(k));
    }

    int size = answer.size(), ins=0, j=0;
    for(int i=0; i<size; i++){  
        ins=answer[i].size();
        for(j=0; j<ins; j++){
            cout<<answer[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}