#include<iostream>
#include<vector>
using namespace std;

vector<int> rotate(vector<int> arr, int n){
    int temp = arr[0];
    for(int i = 0; i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();

    vector<int> ans = rotate(arr, n);
    for(int i = 0; i< n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}