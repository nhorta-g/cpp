# include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	std::cout<<"Constructor called, phoneBook."<<std::endl;
	this->index = 0;
}

PhoneBook::~PhoneBook(void) {
	std::cout<<"Destructor called, phoneBook."<<std::endl;
}

void	PhoneBook::add(void)
{
	
	std::cout<<"Add a contact:"<<std::endl;
	std::cout<<"First name:"<<std::endl;
	std::cin >> this->contact[this->index].first_name;
	std::cout<<"Last name:"<<std::endl;
	std::cin >> this->contact[this->index].last_name;
	std::cout<<"Nickname:"<<std::endl;
	std::cin >> this->contact[this->index].nickname;
	std::cout<<"Phone number:"<<std::endl;
	std::cin >> this->contact[this->index].phone_number;
	std::cout<<"Darkest Secret:"<<std::endl;
	std::cin >> this->contact[this->index].darkest_secret;
}
void	PhoneBook::search(void)
{
	return ;
}
