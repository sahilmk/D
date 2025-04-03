#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        map<char,int> smap;
        int size = s.size(), i=0;
        vector<pair<char,int>> svec;
        string ans = "";

        for(i=0; i<size; i++){
            smap[s[i]]++;
        }
    
        for(auto itr : smap){
            svec.push_back(itr);
        }

        sort(svec.begin(), svec.end(), [](pair<char, int> &a, pair<char, int> &b) {
    return a.second > b.second;
});

        for(i=0; i<svec.size(); i++){
            for(int j=0; j<svec[i].second; j++){
                ans+=svec[i].first;
            }
        }

        return ans;
    }
};


int main(){
    string question = "cccaaa";
    Solution s;
    string answer = s.frequencySort(question);
    cout<<answer<<endl;
    return 0;
}