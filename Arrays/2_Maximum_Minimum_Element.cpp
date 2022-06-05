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
    int min=INT_MAX;
    int max=INT_MIN;
    int i=0,j=0;
    while (i<size){
        if (min>arr[i])
            min=arr[i];
        i++;
    }
    while (j<size){
        if (max<arr[j])
            max=arr[j];
        j++;
    }
    cout<<"Min is" <<min<<endl;
    cout<<"Max is"<<max<<endl;
}