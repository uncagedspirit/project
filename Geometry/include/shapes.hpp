#ifndef SHAPES_HPP
#define SHAPES_HPP

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual void draw() const = 0;
    virtual ~Shape() {}  
};

#endif 
