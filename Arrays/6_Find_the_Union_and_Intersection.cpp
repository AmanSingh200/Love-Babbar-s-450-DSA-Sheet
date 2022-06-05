#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    vector<int>nums(size,0);
    for (int i=0;i<size;i++){
        cin>>nums[i];
    }
    int size2;
    cin>>size2;
    vector<int>nums2(size2,0);
    for (int i=0;i<size2;i++){
        cin>>nums2[i];
    }
    sort(nums.begin(),nums.end());
    sort(nums2.begin(),nums2.end());
    vector<int>uni;
    vector<int>inter;
    int i=0;
    int j=0;
    while (i<nums.size() && j<nums2.size()){
        if (nums[i]<nums2[j]){
            uni.push_back(nums[i]);
            i++;
        }
        else if (nums[i]>nums2[j]){
            uni.push_back(nums2[j]);
            j++;
        }
        else if (nums[i]==nums2[j]){
            uni.push_back(nums[i]);
            i++;
            j++;
        }
    }
    while (i<nums.size()){
        uni.push_back(nums[i]);
        i++;
    }
    while (j<nums2.size()){
        uni.push_back(nums2[j]);
        j++;
    }
    
    int i1=0;
    int j1=0;
    while (i1<nums.size() && j1<nums2.size()){
        if (nums[i1]<nums2[j1]){
            i1++;
        }
        else if (nums[i1]>nums2[j1]){
            j1++;
        }
        else if (nums[i1]==nums2[j1]){
            inter.push_back(nums[i1]);
            i1++;
            j1++;
        }
    }

    for (int i=0;i<uni.size();i++){
        cout<<uni[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<inter.size();i++){
        cout<<inter[i]<<" ";
    }
}