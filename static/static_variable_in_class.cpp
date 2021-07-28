#include <iostream>

class Animal {
public:
    static int i;
};

int Animal::i = 1;  // must write here globally, cannot place in main();

int main () {
    
    Animal obj;
    std::cout << obj.i << std::endl;

    return 0;
}