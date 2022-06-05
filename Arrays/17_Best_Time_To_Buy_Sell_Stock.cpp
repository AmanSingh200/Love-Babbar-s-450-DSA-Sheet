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
    stack<int>st;
    int ans=0;
    for (int i=0;i<size;i++){
        if (st.empty())
            st.push(arr[i]);
        else{
            if (st.top()<arr[i]) 
                ans=max(ans,(arr[i]-st.top()));
            else {
                while (!st.empty()&& st.top()>arr[i])
                    st.pop();
                st.push(arr[i]);
            }
        }
    }
    cout<<ans<<endl;
}