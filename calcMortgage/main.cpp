/*  Mortgage Calculator using the formula for amortization
    Payment =  Term[Rate(1 + Rate)^Term]/[(1 + Rate)^Term - 1]
*/

#include <iostream>
#include <iomanip>
#include "MortgagePayment.h"
#include "PaymentCalc.h"

using namespace std;

int main()
{
    double r, l;
    int t;

    MortgagePayment mortgage;
    PaymentCalc payment;

    cout << "Please enter the amount of loan: ";
    cin >> l;
    mortgage.setLoan(l);
    cout << "Please enter the interest rate: ";
    cin >> r;
    mortgage.setRate(r);
    cout << "Please enter the term in months: ";
    cin >> t;
    mortgage.setTerm(t);

    cout << "Your monthly payment will be: $" << fixed << setprecision(2) << payment.getMonthlyPayment();

    return 0;
}
