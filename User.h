#pragma once

using namespace System;

public ref class User {
public:
    // Database for User information
	int id;
	String^ fname;
	String^ lname;
    String^ username; // Add username field
	String^ accNumber;
	String^ password;
	Decimal balance;
    // Database for transaction history
    int transaction_id;  // Corrected typo in variable name
    int user_id;
    bool is_received;     // Corrected typo in variable name
    int money;
    DateTime transaction_date;

    // Add a new field to store the username from the 'users' table
    String^ userUsername;
};