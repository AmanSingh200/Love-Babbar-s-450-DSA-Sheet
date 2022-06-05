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
    
}    