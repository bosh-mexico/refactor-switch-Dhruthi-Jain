#include "PaymentSystem.h"

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
