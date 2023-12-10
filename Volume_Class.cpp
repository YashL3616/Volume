#include <iostream>
using namespace std;

class Geometry {
public:
    // Function overloading for calculating volume of a cube
    double Volume(double side) {
        return side * side * side; // Volume of the cube
    }

    // Function overloading 
    double Volume(double length, double width, double height) {
        return length * width * height; // Volume of the cuboid
    }
};

int main() {
    double side, length, width, height;

    Geometry shape; // Create an instance of the Geometry class

    // Volume of the cube and the cuboid
    cout << "Volume of the cube is: " << shape.Volume(8) << endl;
    cout << "Volume of the cuboid is: " << shape.Volume(9, 6, 8) << endl;

    return 0;
}
