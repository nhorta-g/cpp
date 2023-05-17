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
	std::cout<<"	Adding a contact"<<std::endl;
	std::cout<<"First name:"<<std::endl;
	std::getline(std::cin, this->contact[this->index].first_name);
	std::cout<<"Last name:"<<std::endl;
	std::getline(std::cin, this->contact[this->index].last_name);
	std::cout<<"Nickname:"<<std::endl;
	std::getline(std::cin, this->contact[this->index].nickname);
	std::cout<<"Phone number:"<<std::endl;
	std::getline(std::cin, this->contact[this->index].phone_number);
	std::cout<<"Darkest Secret:"<<std::endl;
	std::getline(std::cin, this->contact[this->index].darkest_secret);
	this->index++;
}
void	PhoneBook::search(void)
{
	int	num;

	std::cout << "	To show a contact enter the one you want from 1 to 8" << std::endl;
	std::cin >> num;
	if (std::cin.fail())
		std::cout << "Not the correct input, please insert number from 1 to 8" << std::endl;
	std::cout << "Details of first name: " << this->contact[this->index].first_name << std::endl;
	std::cout << "Details of last name: " << this->contact[this->index].last_name << std::endl;
	std::cout << "Details of nickname: " << this->contact[this->index].nickname << std::endl;
	std::cout << "Details of phone number: " << this->contact[this->index].phone_number  << std::endl;;
	std::cout << "Details of darkest secret: " << this->contact[this->index].darkest_secret  << std::endl;;

}
