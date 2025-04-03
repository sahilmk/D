#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            int n=nums1.size(),m=nums2.size();
            
            if(n==0 && m!=0){
                // cout<<"m";
                int ind = m-1;
                if((ind)%2 == 0){
                    return double(nums2[ind/2]);
                }else{
                    return double((nums2[ind/2]+nums2[(ind/2)+1]))/2;
                }
            }else if(m==0 && n!=0){
                // cout<<"n";
                int ind = n-1;
                if((ind)%2 == 0){
                    return double(nums1[ind/2]);
                }else{
                    return double((nums1[ind/2]+nums1[(ind/2)+1]))/2;
                }
            }else{
                // cout<<"none";
                int p1=0, p2=0, breakPoint=(m+n-1)/2;
                int firstElement=0, secondElement=0;
                int cnt = -1;
    
                while(p1<n && p2<m){
                    cnt++;
                    if(nums1[p1] <= nums2[p2]){
                        if(cnt == breakPoint){
                            firstElement=nums1[p1];
                        }
                        if(cnt == breakPoint+1){
                            secondElement=nums1[p1];
                        }
                        p1++;
                    }else{
                        if(cnt == breakPoint){
                            firstElement=nums2[p2];
                        }
                        if(cnt == breakPoint+1){
                            secondElement=nums2[p2];
                        }
                        p2++;
                    }
                    // cout<<"cnt: "<<cnt<<" fe "<<firstElement<<" se "<<secondElement<<endl;
                }
                // cout<<p1<<" "<<p2<<endl;
                while(p1<n){
                    cnt++;
                    // cout<<cnt<<endl;
                    if(cnt == breakPoint){
                        firstElement=nums1[p1];
                    }
                    if(cnt == breakPoint+1){
                        secondElement=nums1[p1];
                    }
                    p1++;
                }
    
                while(p2<m){
                    cnt++;
                    if(cnt == breakPoint){
                        firstElement=nums2[p2];
                    }
                    if(cnt == breakPoint+1){
                        secondElement=nums2[p2];
                    }
                    p2++;
                }
    
                int ind = (m+n)-1;
                // cout<<firstElement<<" "<<secondElement<<" "<<breakPoint<<" "<<ind;
                if((ind)%2 == 0){
                    return firstElement;
                }else{
                    return double(firstElement+secondElement)/2;
                }
            }
        }
    };

int main(){
    Solution s;
    vector<int> arr1{1,2};
    vector<int> arr2{3,4};
    // vector<int> arr1{1,2};
    // vector<int> arr2{3};

    double answer = s.findMedianSortedArrays(arr1,arr2);

    cout<<answer<<endl;
    return 0;
}