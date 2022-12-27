#include <iostream>
using namespace std ;
main (){
int subject1;
int subject2;
int subject3;
int subject4;
int subject5;
float percentage;
float number;
int sum;
string name;
cout << "enter your name :";
cin >> name ;
cout << "enter subject 1:";
cin >> subject1 ;
cout << "enter subject 2: ";
cin >> subject2 ;
cout << "enter subject 3:";
cin >> subject3;
cout << "enter subject 4: ";
cin >> subject4 ;
cout << "enter subject 5 :";
cin >> subject5;

sum = subject1+subject2+subject3+subject4+subject5;
cout << "sum :" << sum << endl;

number = (sum*100);
cout << "number "<< number << endl; 

percentage = (number/500) ;
cout << "percentage :"<< percentage ;










}