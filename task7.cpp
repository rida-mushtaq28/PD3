
#include <iostream>
using namespace std;
main () {
string movie;
int ATprice;
int CTprice;
int NATsold;
int NCTsold;
int donatingpercentage;
int totalamount;
int leftamount;
int donatedamount;
cout << "movie name :";
cin >>  movie;
cout << "adult ticket price :";
cin >> ATprice;
cout << "child ticket price :";
cin >> CTprice;
cout << "no of adult ticket sold :";
cin >>  NATsold;
cout << "no of child ticket sold :";
cin >>   NCTsold;
cout << "donating percentage :";
cin >> donatingpercentage;

totalamount=(ATprice+CTprice+NATsold+NCTsold);
cout << "amount generated :"<< totalamount<<endl;
donatedamount=(totalamount*10)/100;
cout << "donated amount : " << donatedamount<<endl;

leftamount=totalamount-donatedamount;
cout << "leftamount :"<< leftamount ;






}









