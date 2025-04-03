#include<bits/stdc++.h>

using namespace std;

int brogramming(vector<int> arr){
    int ans=0, size=arr.size(), i=0;
    int zero=3, one=1, two=2, three=1, five=1;

    for(i=0; i<size; i++){
        if(zero<=0 && one<=0 && two<=0 && three<=0 && five<=0){
            ans = i;
            break;
        }else{
            if(arr[i] == 0){
                zero--;
            }else if(arr[i] == 1){
                one--;
            }else if(arr[i] == 2){
                two--;
            }else if(arr[i] == 3){
                three--;
            }else if(arr[i] == 5){
                five--;
            }
        }
        
    }

    if(ans==0 && zero<=0 && one<=0 && two<=0 && three<=0 && five<=0){
        // cout<<"hello"<<endl;
        ans = size;
    }

    // cout<<"ans"<<ans<<endl;

    return ans;
}

int main(){
    int t;
    cin>>t;
    vector<int> answer;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;

        vector<int> temp;
        for(int j=0; j<n; j++){
            int te;
            cin>>te;
            temp.push_back(te);
        }

        answer.push_back(brogramming(temp));
    }

    int size = answer.size();
    for(int i=0; i<size; i++){  
        cout<<answer[i];
        cout<<endl;
    }

    return 0;
}