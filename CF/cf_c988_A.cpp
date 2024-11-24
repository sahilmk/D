#include<bits/stdc++.h>

using namespace std;

int findScore(vector<int> arr){
    map<int,int> element;
    int count = 0;

    for(int i=0; i<arr.size(); i++){
        element[arr[i]]++;
    }

    for(auto i: element){
        if(i.second > 1){
            count+=i.second/2;
        }
    }

    return count;
}

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;

        vector<int> arr;

        for(int j=0; j<n; j++){
            int temp;
            cin>>temp;

            arr.push_back(temp);
        }

        int score = findScore(arr);
        cout<<score<<endl;
    }

    return 0;
}