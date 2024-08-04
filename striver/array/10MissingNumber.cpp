#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Brute-force Solution  
// int missingNumber(vector<int> arr){
//     int n = arr.size();
//     for(int i = 1; i <= n; i++){
//         int flag = 0;
//         for(int j = 0; j < n; j++){
//             if(i == arr[j]){
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag == 0)
//             return i;
//     }
// }

// Better Solution
// int missingNumber(vector<int> arr){
//     int n = arr.size();
//     vector<int> hash(n+1, 0);
//     for(int i = 0; i<n; i++){
//         hash[arr[i]] = 1;
//     }
//     for(int i = 1; i<=n; i++){
//         if(hash[i] == 0)
//             return i;
//     }
//     return -1;
// }

// Optimal Solution
// int missingNumber(vector<int> arr){
//     int n = arr.size() + 1;
//     int y = n*(n+1) / 2;
//     int x = 0;
//     for(int i = 0; i<n-1; i++){
//         x += arr[i];
//     }
//     return y-x;
// }

// XOR solution 
int missingNumber(vector<int> arr){
    int n = arr.size();
    int xor1 = 0;
    int xor2 = 0;
    for(int i = 1; i<= n+1; i++)
        xor1 = xor1 ^ i;
    for(int i = 0; i< n; i++)
        xor2 = xor2^ arr[i];
    return xor1 ^ xor2;
}

int main(){
    vector<int> arr1 = {1,2,5,3};
    
    int ans = missingNumber(arr1);
    cout<<ans;
    return 0;
}