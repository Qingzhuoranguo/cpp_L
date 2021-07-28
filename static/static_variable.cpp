#include <iostream>

void print_static () {
    static int count;    // if not initialized, gets set to be 0 by default, unlike other variables can be garbge
    std::cout << "count: " << count << std::endl;
    count ++;
}

void print_non_static() {
    int count = 0;  // must initialize, otherwise can contain garbage.
    std::cout << "count: " << count << std::endl;
    count ++;
}



int main () {
    
    std::cout << "Printing static variable:\n";
    for (int i = 0; i < 5; i ++ ) {
        print_static();
    }

    std::cout << "Printing non-static variable:\n";
    for (int i = 0; i < 5; i ++ ) {
        print_non_static();
    }

    return 0;
}