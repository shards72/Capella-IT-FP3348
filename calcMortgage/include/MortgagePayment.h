#ifndef MORTGAGEPAYMENT_H
#define MORTGAGEPAYMENT_H

class MortgagePayment{
    public:
        MortgagePayment();
        virtual ~MortgagePayment();
        void setLoan(double);
        void setRate(double);
        void setTerm(int);
    protected:
        double rate, loan;
        int term;
};

#endif // MORTGAGEPAYMENT_H
