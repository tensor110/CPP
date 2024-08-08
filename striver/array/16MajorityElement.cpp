#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

// Brute-force Solution 
// int majorityElement(vector<int> arr){
//     int n = arr.size();
//     for(int i = 0; i< n; i++){
//         int count = 0;
//         for(int j = 0; j< n; j++){
//             if(arr[i] == arr[j])
//                 count++;
//         }
//         if(count > n/2){
//             return arr[i];
//         }
//     }
//     return -1;
// }

// Better Solution 
// int majorityElement(vector<int> arr){
//     int n = arr.size();
//     map<int, int> mpp;
//     for(int j = 0; j< n; j++){
//         mpp[arr[j]]++;
//     }
//     for(auto it: mpp){
//         if(it.second > n/2)
//             return it.first;
//     }
//     return -1;
// }

// Optimal Solution 
int majorityElement(vector<int> arr){
    int n = arr.size();
    int count = 0;
    int ele = 0;
    for(int i = 0; i< n; i++){
        if(count == 0){
            count = 1;
            ele = arr[i];
        }
        else if(arr[i] == ele){
            count++;
        }
        else{
            count--;
        }
    }
    int count1= 0;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] == ele)
            count1++;
    }
    if(count1>n/2) return ele;
    return -1;
}

int main(){
    vector<int> arr = {2,2,3,3,1,2,2};
    int ans = majorityElement(arr);
    cout<<ans;
    cout << endl;
    return 0;
}