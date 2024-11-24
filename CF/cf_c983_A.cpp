#include<bits/stdc++.h>

using namespace std;

void findLights(){
    int n;
    cin>>n;
    vector<int> ss;
    int oneCount = 0;
    int zeroCount = 0;
    int maxLight = 0;
    int minLight = 0;

    for(int i=0; i<2*n; i++){
        int l;
        cin>>l;

        if(l == 1){
            oneCount++;
        }

        ss.push_back(l);
    }

    zeroCount = (2*n) - oneCount;

    if(oneCount <= n){
        maxLight = oneCount;

        if(oneCount%2 == 0){
            minLight = 0;
        }else{
            maxLight = 1;
        }
    }else if(oneCount > n){
        maxLight = 2*n - oneCount;

        if(oneCount%2 == 0){
            minLight = oneCount;
        }else{
            maxLight = 1;
        }
    }

    cout<<minLight<<" "<<maxLight;
}

int main(){
    int t;
    cin>>t;
    
    for(int i=0; i<t; i++){
        findLights();
    }

    return 0;
}