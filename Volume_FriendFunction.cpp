#include <iostream>

using namespace std;

class Shape {
public:
    virtual double calculateVolume() const = 0; // Make it a pure virtual function for an abstract base class.
    virtual ~Shape() {} // Virtual destructor for proper polymorphic behavior.
};

class Cylinder : public Shape {
private:
    double radius;
    double height;

public:
    Cylinder(double radius, double height) : radius(radius), height(height) {}

    double calculateVolume() const override {
        return 3.14159 * radius * radius * height;
    }

    // Friend function declaration for Cylinder
    friend double calculateSurfaceArea(const Cylinder& cylinder);
};

class Cuboid : public Shape {
private:
    double length;
    double width;
    double height;

public:
    Cuboid(double length, double width, double height) : length(length), width(width), height(height) {}

    double calculateVolume() const override {
        return length * width * height;
    }

    // Friend function declaration for Cuboid
    friend double calculateSurfaceArea(const Cuboid& cuboid);
};

// Friend function definition for Cylinder
double calculateSurfaceArea(const Cylinder& cylinder) {
    // You can access private members of Cylinder class in this function
    return 2 * 3.14159 * cylinder.radius * (cylinder.radius + cylinder.height);
}

// Friend function definition for Cuboid
double calculateSurfaceArea(const Cuboid& cuboid) {
    // You can access private members of Cuboid class in this function
    return 2 * (cuboid.length * cuboid.width + cuboid.width * cuboid.height + cuboid.height * cuboid.length);
}

int main() {
    Cylinder cylinder(5.0, 10.0);
    Cuboid cuboid(8.0, 4.0, 3.0);

    cout << "Volume of cylinder: " << cylinder.calculateVolume() << endl;
    cout << "Surface area of cylinder: " << calculateSurfaceArea(cylinder) << endl;

    cout << "Volume of cuboid: " << cuboid.calculateVolume() << endl;
    cout << "Surface area of cuboid: " << calculateSurfaceArea(cuboid) << endl;

    return 0;
}
