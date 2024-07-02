#include <iostream>
using namespace std;

/*
Hourswork N
Numberchildren nChild
Salary  Sal
incomeT
NHCL 
dirictTax
Edufund

Condition
N< 40 regular
Sal = N * 5
 > 40 term overtime
Sal  = 40 *5 +( (1.5 *5)*(N-40))
incomeT = 0.15 * Sal
NHCL = 0.025*Sal
dirictTax = 0.01 *Sal
Condition 
nChild > 3
 EduFund = (nChild - 3) * 0.5
Deduc = incomeT+NHCL+DIcT_+EduFund
Netpay = Sal - Deduc

*/

//Inputs
double Hoursofwork ;
int Numberofchildren;

//Output
double GrossSalary;
double incomeTax ;
double NHCL;
double districtTax;
double Edufund;
double Netpay;
double totalDeduction;

int main() {

    cout << "INput the number hours worked: ";
    cin >> Hoursofwork;
    cout << "Enter your number of children: ";
    cin >> Numberofchildren;

    /*
    Condition
        N< 40 regular
        Sal = N * 5
        > 40 term overtime
        Sal  = 40 *5 +( (1.5 *5)*(N-40))
    */
   if (Hoursofwork > 40){
    GrossSalary = 40 * 5 + ((1.5 * 5)* (Hoursofwork-40));
   }
   else{
    GrossSalary = 5 * Hoursofwork;
   }

/*
 Condition
nChild > 3
 EduFund = (nChild - 3) * 0.5
*/
    if(Numberofchildren > 3){
        Edufund = (Numberofchildren-3) * 0.5;
    }

/*
incomeT = 0.15 * Sal
NHCL = 0.025*Sal
dirictTax = 0.01 *Sal
*/
    incomeTax = 0.15 *GrossSalary;
    NHCL = 0.025 * GrossSalary;
    districtTax = 0.01* GrossSalary;

/*
Deduc = incomeT+NHCL+DIcT_+EduFund
Netpay = Sal - Deduc
*/
    totalDeduction = incomeTax + NHCL + districtTax+ Edufund;
    Netpay = GrossSalary - totalDeduction;
    

    cout << "Total deduction \t"<< " Netpay \t"<< " GrossPay "<<endl;
    cout <<totalDeduction<<"\t\t\t|"<< Netpay <<"\t\t|"<<GrossSalary<<endl;

    
    

    return 0;
}

// 40  40*5 = 200  3 = 
// 45  (200 + 37.5) 4  0.5