//exp 4 function overloading
#include <iostream>
using namespace std;

// Function overloading for calculating volume
double calculateVolume(double side) {
    return side * side * side; // Volume of the cube
}

double calculateVolume(double length, double width, double height) {
    return length * width * height; // Volume of the cuboid
}

int main() {
    double side, length, width, height;

    // Give input for cube
    cout << "Enter the side length of the cube: ";
    cin >> side;

    // Give input for cuboid
    cout << "Enter the length of the cuboid: ";
    cin >> length;
    cout << "Enter the width of the cuboid: ";
    cin >> width;
    cout << "Enter the height of the cuboid: ";
    cin >> height;

    // Volume of the cube and the cuboid
    cout << "Volume of the cube is: " << calculateVolume(side) << endl;
    cout << "Volume of the cuboid is: " << calculateVolume(length, width, height) << endl;

    return 0;
}

