#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    vector<int>arr(size,0);
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    int left=0;
    int right=size-1;
    while (left <=right){
        if (arr[left]>0 && arr[right]>0){
             right-=1;
        }
        else if (arr[left]>0 && arr[right]<0){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        else if (arr[left]<0 && arr[right]<0){
            left++;
        }
        else{
                left += 1;
                right -= 1;
        }
    }

    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
