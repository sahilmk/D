#include<bits/stdc++.h>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    int imin = 0;
    int imax = m-1;
    int jmin = 0;
    int jmax = n-1;
    vector<int> answer;

    while(imin<=imax && jmin<=jmax){
        //Right tarversal
        if(jmin<=jmax){
            for(int j=jmin; j<=jmax;j++){
                answer.push_back(matrix[imin][j]);
            }
            imin++;
        }else{
            break;
        }

        //Bottom tarversal
        if(imin<=imax){
            for(int i=imin; i<=imax; i++){
                answer.push_back(matrix[i][jmax]);
            }
            jmax--;
        }else{
            break;
        }

        //Left tarversal
        if(jmin<=jmax){
            for(int j=jmax; j>=jmin; j--){
                answer.push_back(matrix[imax][j]);
            }
            imax--;
        }else{
            break;
        }

        //Up tarversal
        if(imin<=imax){
            for(int i=imax; i>=imin; i--){
                answer.push_back(matrix[i][jmin]);
            }
            jmin++;              
        }else{
            break;
        }
    }

    return answer;
}

int main(){
    vector<vector<int>> matrix{{1,2,3},{4,5,6},{7,8,9}};

    vector<int> answer = spiralOrder(matrix);

    for(auto i : answer){
        cout<<i<<" ";
    }
    return 0;
}