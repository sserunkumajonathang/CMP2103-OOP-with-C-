// Geometry: area of a triangle) Write a program that prompts the user to enter the
// three points (x1, y1), (x2, y2), and (x3, y3) of a triangle and displays its area.
// The formula for computing the area of a triangle is s = (side1 + side2 + side3) / 2
// Area = sqrt(s(s-side1)(s-side2)(s-side3))
// Example: Enter three points for a triangle: 1.5, -3.4, 4.6, 5, 9.5, -3.4 
// The area of the triangle is 33.6
#include <iostream>
#include <cmath>
using namespace std;
double find_area (double p, double k, double l, double m){
    return sqrt (p*(p-k)*(p-l)*(p-m));
}
int main(){
  //variable declaration
  double x1, y1, x2, y2, x3, y3, side1, side2, side3, s, area;

//prompt user to enter the coordinates of the three points
 cout << "Enter three points for a triangle: "<<endl;
   
  //allow user to input the coordinates of the three points

cin>> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  //printing out the points
cout <<"the points are: (" << x1 << ", " << y1 << "), (" << x2 << ", " << y2 << "), (" << x3 << "," << y3 << ")"<< std::endl;
//calculate the lengths of the three sides of the triangle
  side1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
  side2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
  side3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

  //calculate s
  s = (side1 + side2 + side3) / 2;
//calling function to find area

  area = find_area(s, side1, side2, side3 );

  //display the area of the triangle
cout << "The area of the triangle is " << area <<endl;

  return 0;
}
  
 