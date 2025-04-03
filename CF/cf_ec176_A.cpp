#include<bits/stdc++.h>

using namespace std;

int brogramming(int k, int n){
    int count = 0;
    while(n!=0){
        if(n>=k && n%2==1){
            n-=k;
            count++;
        }else if(n>=k && n%2==0){
            count+=n/(k-1);
            n=n%(k-1);
        }else{
            n=0;
            count++;
        }
    }

    return count;
}

int main(){
    int t;
    cin>>t;
    vector<int> answer;
    for(int i=0; i<t; i++){
        int n,k;
        cin>>n;
        cin>>k;

        answer.push_back(brogramming(k,n));
    }

    int size = answer.size();
    for(int i=0; i<size; i++){
        cout<<answer[i]<<endl;
    }
    return 0;
}