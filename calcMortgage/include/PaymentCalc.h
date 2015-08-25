#ifndef PAYMENTCALC_H
#define PAYMENTCALC_H
#include <MortgagePayment.h>


class PaymentCalc : protected MortgagePayment
{
    public:
        PaymentCalc();
        virtual ~PaymentCalc();
        double getMonthlyPayment();
    private:
        double payment;
};

#endif // PAYMENTCALC_H
