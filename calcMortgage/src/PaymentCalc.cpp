#include "PaymentCalc.h"
#include "MortgagePayment.h"
#include "math.h"

using namespace std;

PaymentCalc::PaymentCalc(){}

PaymentCalc::~PaymentCalc(){}

double PaymentCalc::getMonthlyPayment(){
    return payment = (loan * (rate * pow((1 + rate), term)) / (pow((1 + rate), term) - 1));
}
