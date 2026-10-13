#include <iostream>

class Circle {
private:
    double radius;
    const double PI = 3.14159;

public:
    // Default Constructor
    Circle() {
        radius = 0.0;
    }

    // Constructor with argument
    Circle(double r) {
        radius = r;
    }

    // Mutator function
    void setRadius(double r) {
        radius = r;
    }

    // Accessor function
    double getRadius() const {
        return radius;
    }

    // Calculate area
    double getArea() const {
        return PI * radius * radius;
    }

    // Calculate diameter
    double getDiameter() const {
        return radius * 2.0;
    }

    // Calculate circumference
    double getCircumference() const {
        return 2.0 * PI * radius;
    }
};

int main() {
    const int SIZE = 3;
    double radii[SIZE];

    // Ask the user to enter three different radii
    std::cout << "Enter 3 different radii for the circles:\n";
    for (int i = 0; i < SIZE; i++) {
        std::cout << "Radius " << (i + 1) << ": ";
        std::cin >> radii[i];
    }

    // Declare and create an array of three Circle objects using the initializer values
    Circle circles[SIZE] = {
        Circle(radii[0]),
        Circle(radii[1]),
        Circle(radii[2])
    };

    // Report the area, diameter, and circumference for each circle
    std::cout << "\n--- Circle Reports ---\n";
    for (int i = 0; i < SIZE; i++) {
        std::cout << "Circle " << (i + 1) << " (Radius: " << circles[i].getRadius() << "):\n";
        std::cout << "  - Diameter:      " << circles[i].getDiameter() << "\n";
        std::cout << "  - Area:          " << circles[i].getArea() << "\n";
        std::cout << "  - Circumference: " << circles[i].getCircumference() << "\n\n";
    }

    return 0;
}