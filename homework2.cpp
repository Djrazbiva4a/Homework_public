#include <iostream>

using namespace std;

// Base class
class Shape {
public:
    void setWidth(int w) {
        width = w;
    }
    void setHeight(int h) {
        height = h;
    }
    void setLength(int l) {
        length = l;
    }
    void setRadius(int r) {
        radius = r;
    }
protected:
    int width;
    int length;
    int radius;
    int height;
};

// Derived class
class Rectangle : public Shape {
public:
    
    int getArea() {
        return (width * height * length);
    }
    int getAreaCyl() {

        return (3, 14 * radius * radius * height);
    }
};

int main(void) {
    Rectangle Rect;

    Rect.setWidth(3);
    Rect.setHeight(9);
    Rect.setLength(7);
    Rect.setRadius(4);

    // Print the area of the object.
    cout << "Total Cube volume: " << Rect.getArea() << endl;
    cout << "Total Cylinder Volume: " << Rect.getAreaCyl() << endl;

    return 0;
}
