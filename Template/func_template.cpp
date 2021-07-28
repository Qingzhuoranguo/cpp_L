#include <iostream>

template<typename T>
void swap ( T* a, T* b) {
    T temp = *b;
    *b = *a;
    *a = temp;
    return;
}


int main () {
    std::string x("hello");
    std::string y("world?");
    
    std::cout << "x: " << x << ", y: " << y << std::endl;

    swap ( &x, &y);
    std::cout << "x: " << x << ", y: " << y << std::endl;



    return 0;
}