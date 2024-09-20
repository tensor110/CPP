#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

// bool checkBit(int n, int i){
//     if((n & (1<<i)) == 0) return false;
//     else true;
// }

bool checkBit(int n, int i){
    if(((n>>i) & 1) == 0) return false;
    else true;
}

int main(){
    int n = 13;
    int i = 2;
    bool ans = checkBit(n, i);
    cout<<ans;
}