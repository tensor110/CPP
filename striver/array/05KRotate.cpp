#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Brute-force Solution 
// vector<int> kRotate(vector<int> arr, int n, int k){
//     vector<int> temp(k);
//     for(int i = 0; i<k; i++){
//         temp[i] = arr[i];
//     }
//     for(int i = k; i<n;i++){
//         arr[i-k] = arr[i];
//     }
//     for(int i = n-k; i<n;i++){
//         arr[i] = temp[i-(n-k)];
//     }
//     return arr;
// }

// Optimal Solution 
vector<int> kRotate(vector<int> arr, int n, int k){
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.begin()+n);
    reverse(arr.begin(), arr.begin()+n);
    return arr;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    int k = 3;
    vector<int> ans = kRotate(arr, n, k);
    for(int i = 0; i< n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}