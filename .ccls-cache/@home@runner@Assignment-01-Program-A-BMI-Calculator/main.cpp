

/*

Program A: BMI Calculator

Overview

Write a program to calculate the user’s body mass index (BMI).
Directions:

A person’s body mass index (BMI) is calculated using height and weight. The
formula for BMI is: BMI = kg / m2; where kg is the person’s mass in kilograms,
and m2 is their height in meters squared. Write a program to calculate a
person’s BMI. Your program should first ask the user to enter their height in
feet and inches, then their weight in pounds. Your program should then use the
data to calculate the person’s BMI.

Your program should also display the person’s height and weight in meters and
kilograms.

There are 12 inches in a foot, 3.28084 feet in a meter, and 2.20462 pounds in a
kilogram.

The listing below shows an example of what the input and output for this program
might look like.

Sample Input/Output:

What is your height?
Feets: 5
Inches: 10
What is your weight (lbs)? 160
Height (m): 1.78
Weight (kg): 72.57
BMI: 22.96

  */

#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double heightF, heightI, massLbs;
  cout << "What is your height?" << endl;
  cout << "Feets: ";
  cin >> heightF;
  cout << "Inches: ";
  cin >> heightI;
  cout << "What is your weight (lbs)? ";
  cin >> massLbs;

  // ToDo

  return 0;
}
