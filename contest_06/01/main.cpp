#include <cmath>
#define _USE_MATH_DEFINES 

struct Shape {
    virtual double getPerimeter() const = 0;
    virtual ~Shape() {}
};

struct Rectangle : public Shape {
    int length;
    int width;

    Rectangle(int a, int b) : length(a), width(b) {}

    double getPerimeter() const override {
        return 2 * (length + width);
    }
};

struct Circle : public Shape {
    int radius;

    Circle(int r) : radius(r) {}

    double getPerimeter() const override {
        return 2 * M_PI * radius;
    }
};

struct Triangle : public Shape {
    int sideA;
    int sideB;
    int sideC;

    Triangle(int a, int b, int c) : sideA(a), sideB(b), sideC(c) {}

    double getPerimeter() const override {
        if (sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA) {
            return sideA + sideB + sideC;
        } else {
            return 0; // Несуществующий треугольник
        }
    }
};