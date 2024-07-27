#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Brute-force Solution 
// int secondLargest(vector<int> arr, int n){
//     sort(arr.begin(), arr.end());
//     int largest = arr[n-1];
//     int secondLarge = -1;
//     for(int i = n-2; i>0; i--){
//         if(arr[i] != largest){
//             secondLarge = arr[i];
//             break;
//         }
//     }
//     return secondLarge;
// }

// Better Solution  
// int secondLargest(vector<int> arr, int n){
//     int largest = arr[0];
//     int secondLarge = -1;
//     for(int i = 0; i<n; i++){
//         if(arr[i] > largest){
//             largest = arr[i];
//         }
//     }
//     for(int i = 0; i<n; i++){
//         if(arr[i] > secondLarge && arr[i] != largest){
//             secondLarge = arr[i];
//         }
//     }
//     return secondLarge;
// }

// Optimal Solution  
int secondLargest(vector<int> arr, int n){
    int largest = arr[0];
    int secondLarge = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    for(int i = 0; i<n; i++){
        if(arr[i] > secondLarge && arr[i] != largest){
            secondLarge = arr[i];
        }
    }
    return secondLarge;
}

int main(){
    vector<int> arr = {1,8,4,2,6,4};
    int n = 6;
    cout<<secondLargest(arr, n);
}