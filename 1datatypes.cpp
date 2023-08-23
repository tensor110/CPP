//                        Datatypes
//    Primitive            Derived             User-defined
// 1. Integer           1. Function         1. Class
// 2. Float             2. Array            2. Structure
// 3. Character         3. Pointer          3. Union
// 4. Boolean           4. Reference        4. Enum

// 1. Integer
// Size = 4 bytes (32 bits)  (1 byte = 8 bits)
// Range (unsigned) = 0 to 2^32-1
// Range (signed) = -(2^-31) to (2^31)-1
// long long int:- 
// Size = 8 bytes
// Range = -(2^-63) to (2^63)-1
// long int:- 
// Size = 4 bytes
// Range = -(2^-31) to (2^31)-1
// short int:- 
// Size = 2 bytes
// Range = -(2^-16) to (2^16)-1


// 2. Float
// Size = 4 bytes
// store upto 7 decimal digits
// Double:-
// Size = 8 bytes
// store upto 15 decimal digits

// 3. Character (char)
// Size = 1 bytes
// ascii value of 'A' = 65
// ascii value of 'a' = 97

// 4. Boolean (bool)
// stores boolean value -> true and false
// size = 1 byte

#include<iostream>
using namespace std;

int main(){
    int a; //declaration
    a=12;  //Initialization
    cout << "Size of int "<<sizeof(a)<<endl;

    float b;
    cout << "Size of float "<<sizeof(b)<<endl;

    char c;
    cout << "Size of character "<<sizeof(c)<<endl;

    bool d;
    cout << "Size of boolean "<<sizeof(d)<<endl;

    short int si;
    long int li;
    long long int lli;
    cout << "Size of short int "<<sizeof(si)<<endl;
    cout << "Size of long int "<<sizeof(li)<<endl;
    cout << "Size of long long int "<<sizeof(lli)<<endl;
}