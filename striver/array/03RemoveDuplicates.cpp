#include<iostream>
#include<vector>
#include<set>
using namespace std;

// Brute-force Solution
// vector<int> removeduplicates(vector<int> &arr, int n){
//     set<int> st;
//     vector<int> ans;
//     for(int i = 0; i<n; i++){
//         st.insert(arr[i]);
//     }
//     int index = 0;
//     for(auto it:st){
//         ans.push_back(it);
//     }
//     return ans;
// }

// Optimal Solution 
vector<int> removeduplicates(vector<int> arr, int n){
    vector<int> ans;
    ans.push_back(arr[0]);
    int i = 0;
    int j = 1;
    while(j<n){
        if(arr[j] > ans[i]){
            ans.push_back(arr[j]);
            i++;
        }
        j++;
    }
    return ans;
}

// To print the no. of unique elements
int noOfUniqueElements(vector<int> arr, int n){
    int i = 0;
    for(int j = 1; j<n; j++){
        if(arr[j]!=arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return (i+1);
}

int main(){
    vector<int> arr = {1,1,2,2,2,3,4,4,5};
    int n = arr.size();
    vector<int> ans = removeduplicates(arr, n);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<'\n';
    cout<<noOfUniqueElements(arr,n);
    return 0;
}