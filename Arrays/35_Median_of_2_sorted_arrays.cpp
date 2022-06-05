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
    vector<int>nums2(size,0);
    for (int i=0;i<size;i++){
        cin>>nums2[i];
    }
    sort(nums.begin(),nums.end());
    sort(nums2.begin(),nums2.end());

    int totalSize=size*2;
    vector<int>merger(totalSize,0);

    int i=0;
    int j=0;
    int k=0;
    while(i<size && j<size){
        if (nums[i]>nums2[j]){
            merger[k++]=nums2[j];
            j++;
        }
        if (nums[i]<nums2[j]){
            merger[k++]=nums[i];
            i++;
        }
        if (nums[i]==nums2[j]){
            merger[k++]=nums[i];
            i++;
            j++;
        }
    }
    while (i<size){
        merger[k++]=nums[i];
        i++;
    }
    while (j<size){
        merger[k++]=nums2[j];
        j++;
    }
    int start=0;
    int end=totalSize-1;
    int mid=start+(end-start)/2;
    int ans=(merger[mid]+merger[mid+1])/2;
    cout<<ans<<endl;

}    