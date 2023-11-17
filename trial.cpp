//Program to compute the area and perimeter of Circle//
#include <iostream>
#include <math.h>
float PI=3.14;
using namespace std;
int main(){
float r;
cout << "Enter the radius ";
cin >> r;
cout << "The area is " << PI * pow(r, 2) << endl;
cout << "The perimeter is " << 2 * r * PI << endl;
cout << "\"Always there is hope\"\t\t\t\t\"It starts now.\"";
PI = 3.145;
cout << PI;
return 0;
}
