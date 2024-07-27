#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int search(vector<int> arr, int n, int target){
    for(int i = 0;i<n;i++){
        if(arr[i] == target){
            return (i+1);
        }
    }
}

int main(){
    vector<int> arr = {0,1,0,0,4,5};
    int n = arr.size();
    int k = 4;
    int pos = search(arr, n, k);
    cout<<"Position of value "<<k<<" is "<<pos;
    return 0;
}