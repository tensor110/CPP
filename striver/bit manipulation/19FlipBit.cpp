#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int count(int n, int target){
    int ans = n ^ target;
    int count = 0;
    while(ans!=0){
        ans = ans & (ans-1);
        count++;
    }
    return count;
}

int main(){
    int n = 13;
    int target = 6;
    int ans = count(n, target);
    cout<<ans;
}