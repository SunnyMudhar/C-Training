#include "Contact.h"

void Contact::setName(const char* name)
{
	this->_name = name;
}

const char* Contact::getName()
{
	return this->_name;
}

void Contact::setPhone(const char* phone)
{
	this->_phoneNumber = phone;
}

const char* Contact::getPhone()
{
	return this->_phoneNumber;
}

void Contact::setEmail(const char* email)
{
	this->_email = email;
}

const char* Contact::getEmail()
{
	return this->_email;
}