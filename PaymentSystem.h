#pragma once
#include <iostream>
#include <string>

enum class PaymentMode { PAYPAL, GOOGLEPAY, CREDITCARD, UNKNOWN };

void processPayPal(double amount);
void processGooglePay(double amount);
void processCreditCard(double amount);

void checkout(PaymentMode mode, double amount);
