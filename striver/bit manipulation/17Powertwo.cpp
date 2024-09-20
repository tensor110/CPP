#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

bool check(int n){
    int x = (n & n-1);
    if(x == 0)  return true;
    return false;
}

int main(){
    int n = 14;
    bool ans = check(n);
    cout<<ans;
}