// Write a program that prompts the user to enter a weight in pounds and height in inches and
// then displays the BMI. Note that one pound is 0.45359237 kilograms and one inch is
// 0.0254 meters. Listing 4.6 gives the program.

// Conditions
// Below 18.5 Underweight
// 18.5–24.9 Normal
// 25.0–29.9 Overweight
// Above 30.0 Obese

// Enter weight in pounds:
// Enter Weight in pounds: 146
// Enter height in inches: 70
// BMI is 20.95
// Normal
#include<iostream>
#include <iomanip>
#include<cmath>

using namespace std;

double find_BMI(double height, double weight){
    return (weight/(pow(height, 2)));
}

int main(){
double weight, height, w, h;

//prompt to enter weight
cout<<"Enter weight in pounds"<<endl;
cin>>weight;
//prompt to enter height
cout<<"Enter height in inches"<<endl;
cin>>height;
//converting input weight to kilograms
w = weight*0.45359237;
//converting input height to meters
h = height*0.0254;
//setting BMI to 2dp
cout<<fixed<<setprecision(2);
double BMI = find_BMI(h, w);
//calling function for BMI calculation
cout<<"The BMI is: "<<BMI<<endl;

//conditions
if (BMI < 18.5) {
        cout << "Underweight" << endl;
    } else if (BMI <= 24.9) {
        cout << "Normal" << endl;
    } else if (BMI <= 29.9) {
        cout << "Overweight" << endl;
    } else {
        cout << "Obese" << endl;
    }

return 0;
}