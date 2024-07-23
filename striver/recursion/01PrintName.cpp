#include<iostream>
using namespace std;

void printName(int n){
    if(n==0) return;
    else{
        cout<<"Maheswar"<<endl;
        n--;
        printName(n);
    }
}

int main(){
    int n = 5;
    printName(n);
}
