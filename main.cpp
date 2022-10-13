
//?  [Problem Definition]
//*     Write a program that asks for the weight of the package and
//*     the distance it is to beshipped, and then displays the charges.
//** Input Validation :
//* 	Do not accept values of 0 or less for the weight of the package.
//* 	Do not accept weights of more than 20 kg (this is the maximum weight the company will ship).
//* 	Do not accept distances of less than 10 miles or more than 3,000 miles.
//*     These are the company’s minimum and maximum shipping distances.

// Program Outline
// Input
// 	Two Integers, weight and distance.  ( 0< weight <= 20, 10 <= distance < 3000)
// Output
// 	the Charges, Weight,  and Distances
// Program Logic
// 	Input statement for user input
// 	make the validation statement for the input value
// 	make the decision structure to determine the rate based on weight
// 	calculate the total charges
// 		if distance > 500, ( charges = (distance / 500) * rate);
// 		else, charges = rate;
// 	print out the charge, distance, weight.

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
double r1 = 1.10, r2 = 2.20, r3 = 3.70, r4 = 4.80;

double weight, dis, price, dr;

cout << "Enter package weight and the shipping distance: ";
cin >> weight >> dis;
  
if ((weight < 0) || (weight > 20)){
 cout << "\nThe package weight must be a positive number and less than 20.\n";
  exit (0);
} 
  


if (weight < 2) { dr = r1; }

else if ((weight > 2) && (weight <= 6)) { dr = r2; }

else if ((weight > 6) && (weight <= 10)) { dr = r3; }

else if ((weight > 10) && (weight <= 20)) { dr = r4; }

else { cout << "packages less than 20 are permitted."; 
  exit (0);
  }

if (dis > 500) {
 price = (dis / 500) * dr;
}
else { price = dr; } 

cout << setprecision(2) << fixed;
cout << "The shipping price for the package is " << price << endl; 
}