#include<bits/stdc++.h>

using namespace std;

int brogramming(int n, int k, int p){
    int ans = -1, tc=0;

    if(k%p == 0){
        tc=abs(k/p);
    }else{
        tc=abs(k/p)+1;
    }

    // cout<<k<<" tc:"<<tc<<endl;
    if(tc<=n){
        ans=tc;
    }

    return ans;
}

int main(){
    int t;
    cin>>t;
    vector<int> answer;
    for(int i=0; i<t; i++){
        int n,k,p;
        cin>>n;
        cin>>k;
        cin>>p;

        answer.push_back(brogramming(n,k,p));
    }

    int size = answer.size();
    for(int i=0; i<size; i++){
        cout<<answer[i]<<endl;
    }
    return 0;
}