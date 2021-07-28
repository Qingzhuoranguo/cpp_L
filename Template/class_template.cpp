#include <string>
#include <iostream>

template <typename T>
class Animal {
private:
    float Weight;
    std::string Breed;
    T testVal;

public:
    Animal(T val ): Weight(0), Breed("Unkown"), testVal(val) {}
    // ~Animal();
    void animalptr();

};

template <typename T>
void Animal<T>::animalptr () {
    std::cout << testVal << std::endl;
}


int main ( int arg, char** argv ) {
    std::cout << "Main starts...\n";

    Animal<std::string> dog("hello");
    dog.animalptr();
    return 0;
}