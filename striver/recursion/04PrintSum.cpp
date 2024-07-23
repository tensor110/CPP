#include<iostream>
using namespace std;

// Parameterized Way 
// void printSum(int i, int sum){
//     if(i == 0){
//         cout<<sum;
//         return; 
//     }
//     else{
//         sum = sum + i;
//         printSum(i-1, sum);
//     }
// }

// Functional Way 
int printSum(int n){
    if(n == 0) return 0; 
    return n + printSum(n-1);
}

int main(){
    int n = 5;
    // int sum = 0;
    // printSum(n, sum);
    int sum = printSum(n);
    cout<<sum;
}
