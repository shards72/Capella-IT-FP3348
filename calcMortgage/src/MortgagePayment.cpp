#include "MortgagePayment.h"
#include "PaymentCalc.h"

using namespace std;

MortgagePayment::MortgagePayment(){}

MortgagePayment::~MortgagePayment(){}

void MortgagePayment::setLoan(double L){
	loan = L;
}

void MortgagePayment::setRate(double R){
    rate = (R / 100)/12; // Convert to decimal & monthly
}

void MortgagePayment::setTerm(int T){
	term = T;
}

