#include "PaymentSystem.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

class MockPayment {
public:
    MOCK_METHOD(void, payPal, (double), ());
    MOCK_METHOD(void, googlePay, (double), ());
    MOCK_METHOD(void, creditCard, (double), ());
};

void checkoutWithMock(PaymentMode mode, double amount, MockPayment& mock) {
    if (mode == PaymentMode::PAYPAL) {
        mock.payPal(amount);
    } else if (mode == PaymentMode::GOOGLEPAY) {
        mock.googlePay(amount);
    } else if (mode == PaymentMode::CREDITCARD) {
        mock.creditCard(amount);
    }
}
