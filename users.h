#pragma once

using namespace System;

public ref class User {
public:
	int id;
	String^ fname;
	String^ lname;
	String^ username;
	String^ accNumber;
	String^ password;
	Decimal balance;
};