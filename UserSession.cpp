#include "UserSession.h"

UserSession::UserSession(Decimal initialBalance, String^ initialUsername) {
    currentUserBalance = initialBalance;
    currentUsername = initialUsername;
}

Decimal UserSession::GetCurrentUserBalance() {
    return currentUserBalance;
}

String^ UserSession::GetCurrentUsername() {
    return currentUsername;
}

void UserSession::UpdateCurrentUserBalance(Decimal newBalance) {
    currentUserBalance = newBalance;
}
