#include<iostream>
using namespace std;

void printNumbers(int i, int n){
    if(i>n) return;
    else{
        cout<<i<<" ";
        i++;
        printNumbers(i, n);
    }
}

int main(){
    int n = 5;
    int i = 1;
    printNumbers(i, n);
}
