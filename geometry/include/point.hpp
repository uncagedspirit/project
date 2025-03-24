#ifndef POINT_HPP
#define POINT_HPP

#include <fstream>

class Point {
public:
    double onXAxis, onYAxis, onZAxis;
    bool is3D;

    Point();  // Default Constructor
    Point(double x, double y);  // 2D Constructor
    Point(double x, double y, double z);  // 3D Constructor

    void plot();
};

#endif // POINT_HPP
