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

    int countZeroes=0;
    int countOnes=0;
    int countTwos=0;
    for (int i=0;i<size;i++){
        if (arr[i]==0)
            countZeroes++;
        else if (arr[i]==1)
            countOnes++;
        else if (arr[i]==2)
            countTwos++;
    }

    
    while (size--){
        if (countZeroes>0){
            arr.push_back(0);
            countZeroes--;
        }
        else if (countOnes>0){
            arr.push_back(1);
            countOnes--;
        }

        else if (countTwos>0){
            arr.push_back(2);
            countTwos--;
        }
    }

    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}