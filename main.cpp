#include "PaymentSystem.h"

int main() {
    double amount = 300.0;

    checkout(PaymentMode::PAYPAL, amount);
    checkout(PaymentMode::GOOGLEPAY, amount);
    checkout(PaymentMode::CREDITCARD, amount);
    checkout(PaymentMode::UNKNOWN, amount);  

    return 0;
}
