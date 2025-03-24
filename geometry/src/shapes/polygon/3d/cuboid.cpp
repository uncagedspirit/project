#include <bits/stdc++.h>
using namespace std;

#include "geometry.hpp"

Cuboid::Cuboid(double width, double height, double depth) : width(width), height(height), depth(depth) {}

double Cuboid::area() const {
    return 2 * (width * height + width * depth + height * depth);
}

double Cuboid::perimeter() const {
    return 4 * (width + height + depth);
}

double Cuboid::volume() const {
    return width * height * depth;
}

void Cuboid::plot() const {
    std::ofstream file("cuboid.dat");

    //base
    file << "0 0 0\n" 
        << width << " 0 0\n"
        << width << " " << height << " 0\n" 
        << "0 " << height << " 0\n" 
        << "0 0 0\n\n"  

        //top
        << "0 0 " << depth << "\n" 
        << width << " 0 " << depth << "\n"
        << width << " " << height << " " << depth << "\n" 
        << "0 " << height << " " << depth << "\n" 
        << "0 0 " << depth << "\n\n"  

        // Connecting edges
        << "0 0 0\n" 
        << "0 0 " << depth << "\n\n"

        << width << " 0 0\n" 
        << width << " 0 " << depth << "\n\n"

        << width << " " << height << " 0\n" 
        << width << " " << height << " " << depth << "\n\n"

        << "0 " << height << " 0\n" 
        << "0 " << height << " " << depth << "\n";  
    file.close();

    std::string command = "gnuplot -persist -e \""
                          "set xrange [-1:" + to_string(max({width, height, depth}) + 1) + "]; "
                          "set yrange [-1:" + to_string(max({width, height, depth}) + 1) + "]; "
                          "set zrange [-1:" + to_string(max({width, height, depth}) + 1) + "]; "
                          "set xlabel 'X'; set ylabel 'Y'; set zlabel 'Z'; "
                          "splot 'cuboid.dat' using 1:2:3 with lines\"";

    system(command.c_str());
}
