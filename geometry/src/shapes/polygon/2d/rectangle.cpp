#include <bits/stdc++.h>
using namespace std;

#include "geometry.hpp"

// Constructor to initialize width and height
Rectangle::Rectangle(double width, double height) : width(width), height(height) {}

// Override the area method from Shape class
double Rectangle::area() const {
    return width * height;  // Area of the rectangle
}

// Override the perimeter method from Shape class
double Rectangle::perimeter() const {
    return 2 * (width + height);  // Perimeter of the rectangle
}

// Override the draw method from Shape class

void Rectangle::plot() const {
    // Create a file to store the coordinates of the rectangle
    std::ofstream file("rectangle.dat");
    file << "0 0\n"             
         << width << " 0\n"      
         << width << " " << height << "\n" 
         << "0 " << height << "\n" 
         << "0 0\n";             
    file.close();

    // Use gnuplot to visualize the rectangle with dynamic axis range
    std::string command = "gnuplot -persist -e \""
    "set xrange [-1:" + to_string(max(width, height) + 1) + "]; "
    "set yrange [-1:" + to_string(max(width, height) + 1) + "]; "
    "set xzeroaxis; set yzeroaxis; " 
    "plot 'rectangle.dat' using 1:2 with lines\"";

    system(command.c_str());
}


 


