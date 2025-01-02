#pragma once

class Contact
{
private:
	const char* _name;
	const char* _phoneNumber;
	const char* _email;
public:
	void setName(const char* name);
	const char* getName();

	void setPhone(const char* phone);
	const char* getPhone();

	void setEmail(const char* email);
	const char* getEmail();
};