#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Brute-force solution 
int largest(vector<int> arr, int n){
    sort(arr.begin(), arr.end());
    return arr[n-1];
}

// Optimal Solution 
int largest(vector<int> arr, int n){
    int largest = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    vector<int> arr = {4,2,8,5,1};
    int n = arr.size();
    cout<<largest(arr, n);
    return 0;
}