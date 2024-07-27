#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

// Brute-force Solution
vector<int> unionArr(vector<int> arr1, vector<int> arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();
    set<int> st;
    for(int i = 0; i<n1; i++){
        st.insert(arr1[i]);
    }
    for(int i = 0; i<n2; i++){
        st.insert(arr2[i]);
    }
    vector<int> ans;
    for(auto it: st){
        ans.push_back(it);
    }
    return ans;
}

int main(){
    vector<int> arr1 = {1,1,2,3,4,4,5};
    vector<int> arr2 = {1,2,2,3,4,5,6};
    
    vector<int> ans = unionArr(arr1, arr2);
    for(int i = 0; i< ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}