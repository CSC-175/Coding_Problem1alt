#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double volume,d,h;
    // Place your solution code for calculating the area of the triangle using the Heron's formula here
    cout << "Enter value of width (diameter) of the cylinder: ";
    cin >> d;
    cout << "Enter value of height of the cylinder: ";
    cin >> h;


    volume = M_PI * pow((d / 2),2) * h;
    
    // Use this code to output the area of the triangle
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "\nThe volume of the cylinder is " << volume << endl;

    return 0;
}
