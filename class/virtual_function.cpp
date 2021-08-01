#include <iostream>

class Shape {
private:
    uint32_t ID;
public:
    Shape (): ID (1) {
         std::cout << "== Shape test constructor called, ID = 1\n";
    }
    
    Shape ( uint32_t id ): ID(id) {
        std::cout << "== Shape constructor called, ID = " << ID << std::endl;
    }

    inline uint32_t getID () { return ID; }

    virtual void printDetail(){
        return;
    }
};

class Rectangle: public Shape {
private:
    long Width, Length, Area;
public:
    Rectangle ( long w, long l ): Shape(), Width(w), Length(l), Area(w*l){
        std::cout << "== Rectangle constructor called\n";
    }
    inline long getArea() { return Area; }
    virtual void printDetail() {
        std::cout 
            << "Rectangle:\nID: " << getID() << std::endl
            << "Width: " << Width << std::endl
            << "Length: " << Length << std::endl
            << "Area: " << Area << std::endl;
    }
};

class Square: public Rectangle{
private:
    long Edge, Area;
public:
    Square( long e ): Rectangle(e, e), Edge(e), Area(Rectangle::getArea()) {
        std::cout << "== Square constructor called\n";
    }
    void printDetail() {
        std::cout 
            << "Square:\nID: " << Rectangle::getID() << std::endl
            << "Edge: " << Edge << std::endl
            << "Area: " << Area << std::endl;
    }
};

int main () {
    Shape *ptr;
    Square b(5);
    ptr = &b;
    ptr->printDetail();


    Rectangle a(3,4);
    ptr = &a;
    ptr->printDetail();
    
    return 0;
}