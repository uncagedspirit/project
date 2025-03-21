#include <bits/stdc++.h>
using namespace std;

class Line {
public:
    Point start, end;

    // Constructor
    Line(Point a, Point b) {
        start = a;
        end = b;
    }


    void plotLine() {
        ofstream file("line.dat");
        file << start.onXAxis << " " << start.onYAxis << "\n";
        file << end.onXAxis << " " << end.onYAxis << "\n";
        file.close();
        system("gnuplot -e \"plot 'line.dat' with lines\" -p");
    }
};


