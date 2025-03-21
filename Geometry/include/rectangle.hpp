#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "shapes.hpp"  

class Rectangle : public Shape {
public:
    double width, height;

    // Constructor
    Rectangle(double width, double height);

    double area() const override;
    double perimeter() const override;

    void plot() const;  
};

#endif
