# include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	_index = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

void	PhoneBook::add(void)
{
	std::string	msg;

	std::cout << "	Adding a contact to position " << _index << std::endl;
	std::cout << "First name:" << std::endl;
	std::getline(std::cin, _contact[_index].first_name);
	std::cout << "Last name:" << std::endl;
	std::getline(std::cin, _contact[_index].last_name);
	std::cout << "Nickname:" << std::endl;
	std::getline(std::cin, _contact[_index].nickname);
	std::cout << "Phone number:" << std::endl;
	std::getline(std::cin, _contact[_index].phone_number);
	std::cout << "Darkest Secret:" << std::endl;
	std::getline(std::cin, _contact[_index].darkest_secret);
	std::cout << "	Contact sucessfully added!" << std::endl;
	_index++;
	if (_index == 8)
		_index = 0;
}

void	PhoneBook::search(void)
{
	int	num;

	std::cout << "	To show a contact enter the one you want from 1 to 8" << std::endl;
	std::cin >> num;
	if (std::cin.fail())
		std::cout << "Not the correct input, please insert number from 1 to 8" << std::endl;
	std::cout << "Details of first name: " << _contact[_index].first_name << std::endl;
	std::cout << "Details of last name: " << _contact[_index].last_name << std::endl;
	std::cout << "Details of nickname: " << _contact[_index].nickname << std::endl;
	std::cout << "Details of phone number: " << _contact[_index].phone_number << std::endl;;
	std::cout << "Details of darkest secret: " << _contact[_index].darkest_secret << std::endl;;
}
