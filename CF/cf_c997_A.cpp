#include<bits/stdc++.h>

using namespace std;

int calculateSquares(int n, int m, vector<pair<int,int>> ip){
    map<pair<int,int>,int> indexes;
    int answer = 0;
    int lx = 0, ly = 0;

    for(int i=0; i<n; i++){
        lx += ip[i].first;
        ly += ip[i].second;
        int cutx = lx;
        int cuty = ly;

        // cout<<i<<": "<<lx<<" "<<ly<<endl;
        for(int j=0; j<m; j++){
            for(int k=0; k<m; k++){
                pair<int,int> p1;
                p1.first = lx+j;
                p1.second = ly + k;

                // cout<<p1.first<<" "<<p1.second<<" "<<indexes[p1]<<endl;
                if(indexes[p1] != 1){
                    // answer+=1;
                    indexes[p1] = 1;
                }else{
                    cutx = max(cutx,p1.first+1);
                    cuty = max(cuty,p1.second+1);
                }
            }
        }

        int totalCut = (cutx-lx)+(cuty-ly);
        if(totalCut == 0){
            answer += (m*4);
        }else{
            answer+= (((m*4)-totalCut) - totalCut);
        }
        // cout<<"answer"<<answer<<" "<<cutx<<" "<<cuty<<" "<<totalCut<<endl;
    }

    return answer;
}



int main(){
    int t;
    cin>>t;

    vector<int> fanswer;
    for(int i=0; i<t; i++){
        int n,m;

        cin>>n;
        cin>>m;

        vector<pair<int,int>> ip;
        for(int j=0; j<n; j++){
            pair<int,int> p1;
            
            int x;
            int y;

            cin>>x;
            cin>>y;
            p1.first = x;
            p1.second = y;

            ip.push_back(p1);
        }

        int answer = calculateSquares(n,m,ip);

        fanswer.push_back(answer);
    }

    int size = fanswer.size();
    for(int i=0; i<size; i++){
        cout<<fanswer[i]<<endl;
    }

    return 0;
}