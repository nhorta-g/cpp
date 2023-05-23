#include "Contact.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void	Contact::setFirstName(std::string newFirstName) {
	this->firstName = newFirstName;
}

std::string Contact::getFirstName(void) {
	return this->firstName;
}

void	Contact::setLastName(std::string newLastName) {
	this->lastName = newLastName;
}

std::string Contact::getLastName(void) {
	return this->lastName;
}

void	Contact::setNickName(std::string newNickName) {
	this->nickName = newNickName;
}

std::string Contact::getNickName(void) {
	return this->nickName;
}

void	Contact::setPhoneNumber(std::string newPhoneNumber) {
	this->phoneNumber = newPhoneNumber;
}

std::string Contact::getPhoneNumber(void) {
	return this->phoneNumber;
}

void	Contact::setDarkestSecret(std::string newDarkestSecret) {
	this->darkestSecret = newDarkestSecret;
}

std::string Contact::getDarkestSecret(void) {
	return this->darkestSecret;
}
