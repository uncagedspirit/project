#include <fstream>
#include <cstdlib>

#include "geometry.hpp"

using namespace std;

// Constructor implementation
Line::Line(Point a, Point b) : start(a), end(b) {}

void Line::plot() {
    ofstream file("line.dat");
    file << start.onXAxis << " " << start.onYAxis << "\n";
    file << end.onXAxis << " " << end.onYAxis << "\n";
    file.close();
    system("gnuplot -e \"plot 'line.dat' with lines\" -p");
}
