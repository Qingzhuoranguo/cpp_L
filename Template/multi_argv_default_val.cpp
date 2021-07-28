#include <iostream>

template <class T = std::string, class U = std::string>  // template arguements with default valuse
class Animal {
private:
    T x;
    U y;
public:
    Animal ( T a, T b): x(a), y(b) {}
    void print () {
        std::cout << "x: " << x << ", y: " << y << std::endl; 
    }
};


int main () {

    Animal<> a("hello", "world");   // template arguement can be blank if it has defult values.
    Animal<int, char> b(3,'b');
    
    
    a.print();
    b.print();

    return 0;
}