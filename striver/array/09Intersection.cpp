#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

// Brute-force Solution 
// vector<int> intersection(vector<int> arr1, vector<int> arr2){
//     int n1 = arr1.size();
//     int n2 = arr2.size();
//     vector<int> ans;
//     vector<int> vis(n2, 0);
//     for(int i = 0; i < n1; i++){
//         for(int j = 0; j < n2; j++){
//             if(arr1[i] == arr2[j] && vis[j] == 0){
//                 ans.push_back(arr1[i]);
//                 vis[j] = 1;
//                 break;
//             }
//             if(arr1[i]< arr2[j]) break;
//         }
//     }
//     return ans;
// }

// Optimal Solution 
vector<int> intersection(vector<int> arr1, vector<int> arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> ans;
    int i = 0;
    int j = 0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j])
            i++;
        else if(arr1[i]>arr2[j])
            j++;
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main(){
    vector<int> arr1 = {1,1,2,2,3,4,4,5};
    vector<int> arr2 = {1,2,2,3,4,5,6};
    
    vector<int> ans = intersection(arr1, arr2);
    for(int i = 0; i< ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}