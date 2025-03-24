#include <bits/stdc++.h>
#include "geometry.hpp"
using namespace std;

// Functional logic
void execute(int choice) {
    switch(choice) {
        case 1: { // Point
            double x, y;
            cout << "Enter X coordinate: ";
            cin >> x;
            cout << "Enter Y coordinate: ";
            cin >> y;
            Point point(x, y);
            point.plot();
            break;
        }
        
        case 2: { // Line
            double x1, y1, x2, y2;
            cout << "Enter start point (x1 y1): ";
            cin >> x1 >> y1;
            cout << "Enter end point (x2 y2): ";
            cin >> x2 >> y2;
            Line line(Point(x1, y1), Point(x2, y2));
            line.plot();
            break;
        }
        
        case 3: { // 3D Line
            double x1, y1, z1, x2, y2, z2;
            cout << "Enter start point (x1 y1 z1): ";
            cin >> x1 >> y1 >> z1;
            cout << "Enter end point (x2 y2 z2): ";
            cin >> x2 >> y2 >> z2;
            Line line(Point(x1, y1, z1), Point(x2, y2, z2));
            line.plot();
            break;
        }
        
        case 4: { // Square
            double side;
            cout << "Enter side length: ";
            cin >> side;
            Square square(side);
            cout << "Area: " << square.area() << endl;
            cout << "Perimeter: " << square.perimeter() << endl;
            square.plot();
            break;
        }
        
        case 5: { // Rectangle
            double width, height;
            cout << "Enter width: ";
            cin >> width;
            cout << "Enter height: ";
            cin >> height;
            Rectangle rect(width, height);
            cout << "Area: " << rect.area() << endl;
            cout << "Perimeter: " << rect.perimeter() << endl;
            rect.plot();
            break;
        }
        
        case 6: { // Cube
            double side;
            cout << "Enter side length: ";
            cin >> side;
            Cube cube(side);
            cout << "Surface Area: " << cube.area() << endl;
            cout << "Volume: " << cube.volume() << endl;
            cube.plot();
            break;
        }
        
        case 7: { // Cuboid
            double length, width, height;
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            cout << "Enter height: ";
            cin >> height;
            Cuboid cuboid(length, width, height);
            cout << "Surface Area: " << cuboid.area() << endl;
            cout << "Volume: " << cuboid.volume() << endl;
            cuboid.plot();
            break;
        }
        
        default:
            cout << "Please enter a valid choice\n";
    }
}

// Display menu
int displayMenu() {
    cout << "Plot shape using gnuplot.\n";
    cout << "\nWhat shape do you want to plot?\n";
    cout << " 0. Exit \n 1. Point \n 2. Line \n 3. 3D Line \n 4. Square \n 5. Rectangle \n 6. Cube \n 7. Cuboid \n ";
    
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    
    return choice;
}

int main() {
    bool cont = true;
    
    do {
        int choice = displayMenu();
        if(choice == 0) cont = false;
        else execute(choice);
    } while(cont);
}
