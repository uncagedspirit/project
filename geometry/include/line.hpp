#ifndef LINE_HPP
#define LINE_HPP

#include "point.hpp"

class Line {
public:
    Point start, end;

    // Constructor
    Line(Point a, Point b);

    void plot();
};

#endif