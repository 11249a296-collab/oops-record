#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float breadth;

public:
    // Function to set the values
    void setValues(float l, float b) {
        length = l;
        breadth = b;
    }

    // Function to calculate area
    float area() {
        return length * breadth;
    }

    // Function to calculate perimeter
    float perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    Rectangle r;
    float l, b;

    cout << "Enter length of rectangle: ";
    cin >> l;
    cout << "Enter breadth of rectangle: ";
    cin >> b;

    r.setValues(l, b);

    cout << "\nArea of rectangle: " << r.area();
    cout << "\nPerimeter of rectangle: " << r.perimeter();

    return 0;
}
