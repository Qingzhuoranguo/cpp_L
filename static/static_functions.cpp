#include <iostream>
#include <cstring>

class memOS {
private:
    static memOS* instance;  // can only be one memOS instance
public:
    // for user to initizie, the actual constructor 
    static void Init ( uint32_t size ) {
        memOS::instance = new memOS ( size );
    }
    static memOS* Get () { return instance; }

    void print () {
        for (int i = 0; i < Size; i ++ ) {
            std::cout << *(Bytes+i) << std::endl;
        }
    }
private:
    uint32_t Size;

    // constructor is actually private to user, user have to use Init to start
    memOS( uint32_t size ): Size(size) {
        Bytes = (char *) malloc ( Size * sizeof (char));
        memset (Bytes, 97, Size * sizeof (char));
    }
    
    char *Bytes;

};

memOS *memOS::instance = nullptr;  //by definition, static varibles indise a class must be initialized explicityly by the user using class name and scope resoluton(:)

int main () {

    memOS::Init(5);
    memOS::Get()->print();

    return 0;
}
