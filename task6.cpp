#include <iostream>
using namespace std ;
main () {
int size;
int cost;
int area;
float costperpound;
float costpersqfeet;

cout << "enter size of bag in pounds :";
cin >> size;
cout << "enter cost of the bag :";
cin >> cost;
cout << "enter area covered by each bag in sq feet :";
cin >> area;

costperpound =cost/size;
cout << "cost per pound :"<< costperpound << endl;

costpersqfeet = cost/area;
cout << "cost per sq feet :"<< costpersqfeet << endl;










}