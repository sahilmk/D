#include<bits/stdc++.h>

using namespace std;

int brogramming(vector<int> ntemp, int k){
    sort(ntemp.begin(),ntemp.end());
    for(int i=0; i<ntemp.size(); i++){
    }

    int sum=0, p=ntemp.size()-1;
    for(int i=0; i<=k; i++){
        sum+=ntemp[p--];
    }

    return sum;
}

int main(){
    int t;
    cin>>t;
    vector<int> answer;
    for(int i=0; i<t; i++){
        int n,k;
        cin>>n;
        cin>>k;

        vector<int> temp;
        for(int j=0; j<n; j++){
            int ntemp;
            cin>>ntemp;
            temp.push_back(ntemp);
        }

        answer.push_back(brogramming(temp,k));
    }

    int size = answer.size();
    for(int i=0; i<size; i++){
        cout<<answer[i]<<endl;
    }
    return 0;
}