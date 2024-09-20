#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

// Brute-force Solution 
// int count(int n){
//     int count = 0;
//     while(n>1){
//         if(n%2 == 1)    count+=1;
//         n = n/2;
//     }
//     if(n == 1)  count+=1;
//     return count;
// }

// Best Solution 
// int count(int n){
//     int count = 0;
//     while(n>1){
//         count += n&1;
//         n = n>>1;
//     }
//     if(n == 1)  count+=1;
//     return count;
// }

// Optimal Solution 
int count(int n){
    int count = 0;
    while(n!=0){
        n= n & (n-1);
        count++;
    }
    return count;
}

int main(){
    int n = 12;
    int ans = count(n);
    cout<<ans;
}