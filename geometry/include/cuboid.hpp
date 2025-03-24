#ifndef CUBOID_HPP
#define CUBOID_HPP

#include "shapes.hpp"
#include <fstream>
#include <iostream>

class Cuboid : public Shape {
public:
    double width, height, depth;

    // Constructor
    Cuboid(double width, double height, double depth);

    double area() const override;
    double perimeter() const override;
    double volume() const override;
    
    void plot() const override;  
};

#endif
