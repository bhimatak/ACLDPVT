#include <iostream>

class PaymentGateway {
protected:
    double charges;
public:
    PaymentGateway(double charges) : charges(charges) {}
    virtual void make_payment(double amount) = 0;
};

class PayTm: public PaymentGateway {
public:
    PayTm(double charges): PaymentGateway(charges) {}
    void make_payment(double amount) {
        std::cout << "Paying " << amount << "using PayTm " << __func__ << std::endl;
    }
};

class Axis: public PaymentGateway {
public:
    Axis(double charges): PaymentGateway(charges) {}
    void make_payment(double amount) {
        std::cout << "Paying " << amount << "using Axis " << __func__ << std::endl;
    }
};

class Factory {
public:
    static PaymentGateway* create_payment_gateway(int);
};

PaymentGateway* Factory::create_payment_gateway(int bank_type) {
    PaymentGateway *pgw = nullptr;
    switch(bank_type) {
        case 1:
            pgw = new PayTm(100);
            break;
        case 2:
            pgw = new Axis(90);
            break;
        default:
            std::cout << "Invalid gateway\n";
            break;
    }
    return pgw;
}

int main()
{
    int ttype;
    while(1) {
        std::cout << "What kind of gateway do you want? (type 1 for payTm, 2 for Axis, other to exit): ";
        std::cin >> ttype;
        std::cin.ignore(1000, '\n');
        std::cout << "Creating gateway of type = " << ttype << std::endl;
        if (ttype > 2) {
            std::cout << "ttype is invalid. quitting...";
            break;
        }
        PaymentGateway *pgw = Factory::create_payment_gateway(ttype);
        if (pgw) {
            pgw->make_payment(1000);
        }
    }
    return 0;
}