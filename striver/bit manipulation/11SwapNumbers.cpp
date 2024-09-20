#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void swap(int &x, int &y){
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
}

int main(){
    int x = 5;
    int y = 6;
    cout<<"Before swap x = "<<x<<" y = "<<y<<endl;
    swap(x, y);
    cout<<"After swap x = "<<x<<" y = "<<y<<endl;
}