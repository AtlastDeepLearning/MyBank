#pragma once
#include <vcclr.h>

using namespace System;

ref class UserSession {
private:
    Decimal currentUserBalance;
    String^ currentUsername;

public:
    UserSession(Decimal initialBalance, String^ initialUsername);
    Decimal GetCurrentUserBalance();
    String^ GetCurrentUsername();
    void UpdateCurrentUserBalance(Decimal newBalance);
};
