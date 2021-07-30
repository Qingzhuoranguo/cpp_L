#include <iostream>

const int function ( const int a ) {
    int x = 4;
    // return  x;  return a created a value (not necessarily a const),  correct
    // return 3;  directly return a number instead of a varibale,  correct
    return a;  //take const a  return const a ,  correct
}

int main () {
    std::cout << "main starts\n";
    int x = 3; // non const variable can pass to function takes const
    std::cout << function (x) << std::endl;


    return 0;
}