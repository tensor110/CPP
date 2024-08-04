#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

// Brute-force Solution 
// int onceAppear(vector<int> arr){
//     int n = arr.size();
//     for(int i = 0; i< n; i++){
//         int num = arr[i];
//         int count = 0;
//         for(int j = 0; j<n; j++){
//             if(num == arr[j]){
//                 count++;
//             }
//         }
//         if(count == 1) return num;
//     }
//     return 0;
// }

// Better Solution 
// int onceAppear(vector<int> arr){
//     int n = arr.size();
//     vector<int> hash(n, 0);
//     for(int i = 0; i < n; i++){
//         hash[arr[i]]++;
//     }
//     for(int i = 0; i < n; i++){
//         if(hash[i] == 1){
//             return arr[i];
//         }
//     }
//     return 0;
// }

// int onceAppear(vector<int> arr){
//     int n = arr.size();
//     map<long long, int> mpp;
//     for(int i = 0; i < n; i++){
//         mpp[arr[i]]++;
//     }
//     for(auto it: mpp){
//         if(it.second == 1)
//             return it.first;
//     }
//     return 0;
// }

// Optimal Solution 
int onceAppear(vector<int> arr){
    int n = arr.size();
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    vector<int> arr1 = {1,1,2,3,3,4,4};
    
    int ans = onceAppear(arr1);
    cout<<ans;
    return 0;
}