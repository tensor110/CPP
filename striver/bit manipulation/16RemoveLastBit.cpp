#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int clearBit(int n, int i){
    int x = (n & n-1);
    return x;
}

int main(){
    int n = 13;
    int i = 2;
    int ans = clearBit(n, i);
    cout<<ans;
}