#include<bits/stdc++.h>

using namespace std;

int brogramming(vector<int> arr, int x){
    int ans = 0, size=arr.size(), i=0, temp=size-1;
    sort(arr.begin(), arr.end());

    for(i=size-1; i>-1; i--){
        // cout<<arr[i]<<" "<<i<<" "<<temp<<endl;
        if(arr[i] >=x){
            ans++;
            temp=i-1;
        }else{
            if(arr[i]*(temp-i+1) >= x){
                ans++;
                temp=i-1;
            }
        }
    }

    if(arr[0]*(temp-0+1) >= x){
        ans++;
    }

    return ans;
}

int main(){
    int t;
    cin>>t;
    vector<int> answer;
    for(int i=0; i<t; i++){
        int n,x;
        cin>>n;
        cin>>x;

        vector<int> temp;
        for(int j=0; j<n; j++){
            int te;
            cin>>te;
            temp.push_back(te);
        }

        answer.push_back(brogramming(temp,x));
    }

    int size = answer.size();
    for(int i=0; i<size; i++){  
        cout<<answer[i];
        cout<<endl;
    }

    return 0;
}