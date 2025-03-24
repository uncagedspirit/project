#include <iostream>
#include <cstdlib>  // for system()

#include "geometry.hpp"

using namespace std;

// Default Constructor
Point::Point() : onXAxis(0), onYAxis(0), onZAxis(0), is3D(false) {}

// 2D Constructor
Point::Point(double x, double y) : onXAxis(x), onYAxis(y), onZAxis(0), is3D(false) {}

// 3D Constructor
Point::Point(double x, double y, double z) : onXAxis(x), onYAxis(y), onZAxis(z), is3D(true) {}

void Point::plot() {
    ofstream file("point.dat");
    file << onXAxis << " " << onYAxis;
    if (is3D) file << " " << onZAxis;
    file << "\n";
    file.close();

    ofstream labelFile("label.dat");
    labelFile << onXAxis << " " << onYAxis;
    if (is3D) labelFile << " " << onZAxis;
    labelFile << " \"" << onXAxis << "," << onYAxis;
    if (is3D) labelFile << "," << onZAxis;
    labelFile << "\"\n";
    labelFile.close();

    if (is3D)
        system("gnuplot -e \"splot 'point.dat' with points pointtype 7 pointsize 1.5, 'label.dat' using 1:2:3:4 with labels\" -p");
    else
        system("gnuplot -e \"plot 'point.dat' with points pointtype 7 pointsize 1.5, 'label.dat' using 1:2:3 with labels\" -p");
}
