#include<bits/stdc++.h>

using namespace std;

vector<int> findMN(int k, vector<int> arr){
    int originalLength = k - 2;

    if(arr[0]*arr[1] == originalLength){
        return {arr[0],arr[1]};
    }else if(originalLength%2 == 0){
        return {originalLength/2,2};
    }else{
        return {originalLength,1};
    }
}

int main(){
    int t;
    cin>>t;
    vector<vector<int>> answer;

    for(int i=0; i<t; i++){
        int k;
        cin>>k;
        vector<int> arr;

        for(int i=0; i<k; i++){
            int temp;
            cin>>temp;

            arr.push_back(temp);
        }

        answer.push_back(findMN(k,arr));
    }

    for(auto i : answer){
        cout<<i[0]<<" "<<i[1]<<endl;
    }

    return 0;
}