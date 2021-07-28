#include <iostream>

class Animal {
public:
    Animal() {
        std::cout << "Animal: constructor runs\n";
    }

    ~Animal() {
        std::cout << "Animal: distructor runs\n";
    }
    
    void print () {
        std::cout << "runs\n";
    }
};

int main () {
    int x = 0;

    if ( x == 0 ){
        // Animal a;             // has lifetime of the if-block
        static Animal a;     //has lifetime of the program, but only has the scope within the if-block
    }

    std::cout << "main function ends\n";

    return 0;
}