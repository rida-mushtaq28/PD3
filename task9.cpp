#include <iostream>
using namespace std;
main () {
int num1;
int num2;
int num3;
int num4;
int num5;
int num6;
int num7;
int num8;
int num9;
int num10;
int num11;
int num12;
int num13;
int num14;
int num15;
int sum;
int multiply;
int sub;
int total;
cout << "num1 :";
cin >> num1;
cout << "num2 :";
cin >> num2 ;
cout << "num3 :";
cin >> num3;
cout << "num4 :";
cin >> num4 ;
cout << "num5 :";
cin >> num5 ;
sum=(num1+num2+num3+num4+num5);
cout << "add 1st 5 number :"<< sum<< endl;
cout << "num6 :";
cin >> num6;
cout << "num7 :";
cin >> num7 ;
cout << "num8 :";
cin >> num8;
cout << "num9 :";
cin >> num9 ;
cout << "num10 :";
cin >> num10 ;
multiply=(num6*num7*num8*num9*num10);
cout << "multiplicatiom of next 5 numbers :"<< multiply<< endl; 

cout << "num11 :";
cin >> num11;
cout << "num12 :";
cin >> num12 ;
cout << "num13 :";
cin >> num13;
cout << "num14 :";
cin >> num14 ;
cout << "num15 :";
cin >> num15 ;
sub=(num11-num12-num13-num14-num15);
cout << "subtract next 5 numbers :"<< sub<< endl;

total=(sum+multiply)-sub;
cout << "total :" << total;









}