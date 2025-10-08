#include "PaymentSystem.h"

void processPayPal(double amount) {
    std::cout << "[PayPal] Processing payment: $" << amount << std::endl;
}

void processGooglePay(double amount) {
    std::cout << "[GooglePay] Processing payment: $" << amount << std::endl;
}

void processCreditCard(double amount) {
    std::cout << "[CreditCard] Processing payment: $" << amount << std::endl;
}

void checkout(PaymentMode mode, double amount) {
    if (mode == PaymentMode::PAYPAL) {
        processPayPal(amount);
    } else if (mode == PaymentMode::GOOGLEPAY) {
        processGooglePay(amount);
    } else if (mode == PaymentMode::CREDITCARD) {
        processCreditCard(amount);
    } else {
        std::cout << "Invalid payment mode selected!" << std::endl;
    }
}
