#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
// Leader -> The element whose right side elements are samller than the element 

// Brute-force Solution 
// vector<int> leaders(vector<int> arr){
//     vector<int> ans;
//     int n = arr.size();
//     for(int i = 0; i<n; i++){
//         bool leader = true;
//         for(int j = i; j<n; j++){
//             if(arr[j] > arr[i]){
//                 leader = false;
//                 break;
//             }
//         }
//         if(leader == true)  ans.push_back(arr[i]);
//     }
//     return ans;
// }

// Optimal Solution 
vector<int> leaders(vector<int> arr){
    vector<int> ans;
    int n = arr.size();
    int maxi = INT_MIN;
    for(int i = n-1; i>=0; i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
        }
        maxi = max(maxi, arr[i]);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    vector<int> arr = {10,22,12,3,0,6};
    vector<int> ans = leaders(arr);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}