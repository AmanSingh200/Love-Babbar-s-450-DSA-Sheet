#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int>&arr,int i,int j){
    int li=i;
    int ri=j;
    while (li<ri){
        int temp=arr[li];
        arr[li]=arr[ri];
        arr[ri]=temp;
        li++;
        ri--;
    }
}
int main(){
    int size;
    cin>>size;
    vector<int>arr(size,0);
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    if (k>size)
        k=k%size;
    if (k<0)
        k=size+k;

    reverse(arr,0,size-k-1);
    reverse(arr,size-k,size-1);
    reverse(arr,0,size-1);

    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}