#include <bits/stdc++.h>
using namespace std;

class Point {
    public:
        double onXAxis, onYAxis, onZAxis;
        bool is3D;
    
        // Default Constructor
        Point() {
            onXAxis = 0;
            onYAxis = 0;
            onZAxis = 0;
            is3D = false;
        }
    
        // 2D Point Constructor
        Point(double x, double y) {
            onXAxis = x;
            onYAxis = y;
            onZAxis = 0;
            is3D = false;
        }
    
        // 3D Point Constructor
        Point(double x, double y, double z) {
            onXAxis = x;
            onYAxis = y;
            onZAxis = z;
            is3D = true;
        }

        void plotPoint() {
            ofstream file("point.dat");
            file << onXAxis << " " << onYAxis;
            if (is3D) file << " " << onZAxis;  // Add z-axis if 3D
            file << "\n";
            file.close();
        
            ofstream labelFile("label.dat");
            labelFile << onXAxis << " " << onYAxis;
            if (is3D) labelFile << " " << onZAxis;
            labelFile << " \"" << onXAxis << "," << onYAxis;
            if (is3D) labelFile << "," << onZAxis;
            labelFile << "\"\n";
            labelFile.close();
        
            // Plot using gnuplot with labels
            if (is3D)
                system("gnuplot -e \"splot 'point.dat' with points pointtype 7 pointsize 1.5, 'label.dat' using 1:2:3:4 with labels\" -p");
            else
                system("gnuplot -e \"plot 'point.dat' with points pointtype 7 pointsize 1.5, 'label.dat' using 1:2:3 with labels\" -p");
        }
        
    };




