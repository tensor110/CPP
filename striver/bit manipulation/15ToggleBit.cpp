#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int toggleBit(int n, int i){
    int x = (n ^ 1<<i);
    return x;
}

int main(){
    int n = 13;
    int i = 1;
    int ans = toggleBit(n, i);
    cout<<ans;
}