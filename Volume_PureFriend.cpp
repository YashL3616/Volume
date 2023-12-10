#include <iostream>
using namespace std;

class Cylinder {
private:
    double radius;
    double height;

public:
    Cylinder(double radius, double height) : radius(radius), height(height) {}

    // Friend function declaration for Cylinder
    friend double CylinderVolume(const Cylinder& cylinder);
};

class Cuboid {
private:
    double length;
    double width;
    double height;

public:
    Cuboid(double length, double width, double height) : length(length), width(width), height(height) {}

    // Friend function declaration for Cuboid
    friend double CuboidVolume(const Cuboid& cuboid);
};

double CylinderVolume(const Cylinder& cylinder) {
    return 3.14159 * cylinder.radius * cylinder.radius * cylinder.height;
}

double CuboidVolume(const Cuboid& cuboid) {
    return cuboid.length * cuboid.width * cuboid.height;
}

int main() {
    Cylinder cylinder(5.0, 10.0);
    Cuboid cuboid(8.0, 4.0, 3.0);

    cout << "Volume of cylinder: " << CylinderVolume(cylinder) << endl;
    cout << "Volume of cuboid: " << CuboidVolume(cuboid) << endl;

    return 0;
}
