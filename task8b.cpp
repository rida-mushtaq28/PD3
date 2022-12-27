#include <iostream>
using namespace std;
main (){
int digit;
int number1;
int number2;
int number3;
int number4;
int sums;
cout << "enter 4 digits number: ";
cin >> digit;
number1=(digit%10);
digit=(digit/10);

number2=(digit%10);
digit=(digit/10);

number3=(digit%10);
digit=(digit/10);

number4=(digit%10);
digit=(digit/10);

sums=number1+number2+number3+number4;
cout << "sums :"<< sums;
















}