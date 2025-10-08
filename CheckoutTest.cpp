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

TEST(CheckoutTest, CallsCorrectPaymentFunction) {
    MockPayment mock;

    EXPECT_CALL(mock, payPal(150.0)).Times(1);
    EXPECT_CALL(mock, googlePay(150.0)).Times(1);
    EXPECT_CALL(mock, creditCard(150.0)).Times(1);

checkoutWithMock(PaymentMode::PAYPAL, 150.0, mock);
checkoutWithMock(PaymentMode::GOOGLEPAY, 150.0, mock);
checkoutWithMock(PaymentMode::CREDITCARD, 150.0, mock);
checkoutWithMock(PaymentMode::UNKNOWN, 150.0, mock);
}

