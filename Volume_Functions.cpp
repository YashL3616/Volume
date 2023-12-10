//simple
#include <iostream>
using namespace std;

double volumeOfCube(double side) {
    return side * side * side;
}
double volumeOfCuboid(double length, double width, double height) {
    return length * width * height;
}

int main() {
    double side, length, width, height;

     //Give Input for cube
    cout << "Enter the side length of the cube: ";
    cin >> side;

    //Give Input for cuboid
    cout << "Enter the length of the cuboid: ";
    cin >> length;
    cout << "Enter the width of the cuboid: ";
    cin >> width;
    cout << "Enter the height of the cuboid: ";
    cin >> height;

    //volume of the cube and the cuboid
    cout << "Volume of the cube is: " << volumeOfCube(side) << endl;
    cout << "Volume of the cuboid is: " << volumeOfCuboid(length, width, height) << endl;

    return 0;
}
