#include<bits/stdc++.h>

using namespace std;

string calculateP(vector<int> n, vector<int> m){
    int possible = 1, nsize = n.size();

    for(int i=0; i<nsize; i++){
        if(i+1<nsize && n[i] > n[i+1]){
            int temp = m[0]-n[i];

            if((i-1 >= 0 && temp<n[i-1]) || temp > n[i+1]){
                possible = 0;
                break;
            }

            // cout<<" el: "<<n[i]<<" temp: "<<temp;
            n[i] = temp;
        }
    }

    if(possible == 1){
        return "YES";
    }else{
        return "NO";
    }
}

int main(){
    int t;
    cin>>t;
    vector<string> answer;

    for(int i=0; i<t; i++){
        int n,m,j=0;
        cin>>n;
        cin>>m;
        vector<int> narr;
        vector<int> marr;

        for(j=0; j<n; j++){
            int temp;
            cin>>temp;
            narr.push_back(temp);
        }

        for(j=0; j<m; j++){
            int temp;
            cin>>temp;
            marr.push_back(temp);
        }

        answer.push_back(calculateP(narr,marr));
        // cout<<endl;
    }

    int size = answer.size();
    for(int i=0; i<size; i++){
        cout<<answer[i]<<endl;
    }
    return 0;
}