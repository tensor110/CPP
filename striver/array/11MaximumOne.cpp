#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maximumOne(vector<int> arr){
    int n = arr.size();
    int maxi = 0;
    int count = 0;
    for(int i = 0;i < n; i++){
        if(arr[i] == 1){
            count++;
            maxi = max(count, maxi);
        }
        else
            count = 0;
    }
    return maxi;
}

int main(){
    vector<int> arr1 = {1,1,0,1,1,1,0,0,1};
    
    int ans = maximumOne(arr1);
    cout<<ans;
    return 0;
}