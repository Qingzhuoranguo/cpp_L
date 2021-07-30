#include <iostream>

class Animal {
    std::string Name;
public:
    Animal ( std::string name ): Name(name) {}

    // const function
    void method1 () const {
        /*
        this is Wrong since const method cannot change class variables
        */
        // Name = std::string ("Changed Name"); 
        std::cout << Name << std::endl;
    }

    void method2() {
        Name = std::string ("Changed Name"); 
    }
};

int main () {
    std::cout << "main starts\n";

    Animal a("lucky");
    a.method1(); // non const object a can call const method method1

    const Animal b("lucy");
    b.method1();  // const object can call const method 

    // b.method2();  // Wrong: because const obj canno call non const method
    

    return 0;
}