//Title: Project1.cpp
#include <iostream>
#include <iomanip>
using namespace std;
int main() { 

const double COMMISSION_RATE1 = 0.05; //under $10,000/mo
const double COMMISSION_RATE2 = 0.10; //$10,000/mo - 14,999.99/mo
const double COMMISSION_RATE3 = 0.12; //$15,000/mo - 17,999.99/mo
const double COMMISSION_RATE4 = 0.14; //$18,000/mo - 21,999.99/mo
const double COMMISSION_RATE5 = 0.16; //over $22,000/mo
double sales;
double advancePay;
double commission = 0.0;
double remainingPay = 0.0;

cout << "Enter salesperson's monthly sales: ";
cin >> sales;
cout << "Enter salesperson's advance pay: ";
cin >> advancePay;

if (sales <= 9999)
  commission = sales * COMMISSION_RATE1;
else if (sales >= 10000 && sales <= 14999.99)
  commission = sales * COMMISSION_RATE2;
else if (sales >= 15000 && sales <= 17999.99)
  commission = sales * COMMISSION_RATE3;
else if (sales >= 18000 && sales <= 21999.99)
  commission = sales * COMMISSION_RATE4;
else
  commission = sales * COMMISSION_RATE5;

remainingPay = commission - advancePay;
  
cout << "Pay Results \n";
cout << "----------- \n";
cout << setprecision(2) << fixed;
cout << "Sales: $" << sales << endl;
cout << "Commission Rate: " << (commission / sales) << endl;
cout << "Commission: $" << commission << endl;
cout << "Advanced Pay: $" << advancePay << endl;
cout << "Remaining Pay: $" << remainingPay << endl;

  


return 0;
}