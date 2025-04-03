#include<bits/stdc++.h>

using namespace std;

int brogramming(int n, int m, int k){
    int ans = 0, maxmEl=m%2==0?m/2:(m/2)+1;
    cout<<"m:"<<maxmEl;
    int maxnmEl = maxmEl*n;
    cout<<" max: "<<maxnmEl;

    if(k <= maxnmEl){
        ans = 1;
    }else{
        int remin = k - maxnmEl;

        int extrRow = ceil(double(remin)/double(n));
        ans = maxmEl + extrRow;
        cout<<" remin: "<<remin<<" ex: "<<extrRow;
    }
    cout<<endl;

    

    return ans;
}

int main(){
    int t;
    cin>>t;
    vector<int> answer;
    for(int i=0; i<t; i++){
        int n,m,k;
        cin>>n;
        cin>>m;
        cin>>k;

        answer.push_back(brogramming(n,m,k));
    }

    int size = answer.size();
    for(int i=0; i<size; i++){  
        cout<<answer[i];
        cout<<endl;
    }

    return 0;
}