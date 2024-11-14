#include<bits/stdc++.h>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = 0;
    if(m==0 && n!=0){
        for(i=0; i<nums2.size(); i++){
            nums1[i] = nums2[i];
        }
    }else if(m!=0 && n!=0){
        for(i=0; i<m; i++){
            if(nums1[i] > nums2[0]){
                int temp = nums1[i];
                nums1[i] = nums2[0];

                nums2.erase(nums2.begin());
                nums2.push_back(temp);
                sort(nums2.begin(),nums2.end());
            }
        }

        for(i=0; i<n; i++){
            nums1[m+i] = nums2[i];
        }
    }
}

int main(){
    vector<int> nums1 {1,2,3,0,0,0};
    vector<int> nums2 {2,5,6};

    merge(nums1,3,nums2,3);

    for(auto i : nums1){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}