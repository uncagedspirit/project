#include <bits/stdc++.h>
using namespace std;

//display file
//functional logic file


int displayMenu(){
    cout<< "Plot shape using gnuplot.\n";
    cout<<"\nWhat shape do you want to plot?\n";
    cout<<" 0. I want to exit \n 1. Point \n 2. Line \n 3. 3D Line \n 4. Square \n 5. Rectangle \n 6. Cube \n 7. Cuboid \n ";
    
    int choice; 
    cout<< "Enter your choice : ";
    cin>> choice;
    
    return choice;
}

int main(){

    bool cont = true;

    do{
        int choice = displayMenu();
        if(choice == 0 ) cont= false;
    }while(cont);
}