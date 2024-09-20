#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int setBit(int n, int i){
    int x = (n | 1<<i);
    return x;
}

int main(){
    int n = 9;
    int i = 2;
    int ans = setBit(n, i);
    cout<<ans;
}