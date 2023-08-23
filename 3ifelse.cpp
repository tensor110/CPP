// If/else statement 
#include<iostream>
using namespace std;
int main(){
    int s;
    cout<<"Enter your savings: ";
    cin>>s;
    if(s>5000){
        if(s>10000){
            cout<<"Roadtrip with neha";
        }
        else{
            cout<<"Shooping with neha";
        }
    }
    else if(s>3000){
        cout<<"Date with Rashmi";
    }
    else{
        cout<<"Party with ffriends";
    }
}