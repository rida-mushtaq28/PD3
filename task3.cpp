#include <iostream>
using namespace std ;
main () {
float initialvelocity;
float finalvelocity;
float acceleration;
int time ;
cout << "enter initial velocity :";
cin >> initialvelocity;
cout << "enter acceleration :";
cin >> acceleration ;
cout << "enter time :";
cin >> time ;

finalvelocity=(acceleration*time)+initialvelocity;
cout << "final velocity " << finalvelocity ;




}