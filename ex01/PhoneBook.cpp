# include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	_index = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

/*
void	get_cin (std::string *_temp)
{
	*_temp = std::string("");
	while (!(*_temp).empty())
		std::cin >> *_temp);
}
*/

void	PhoneBook::add(void)
{
	std::cout << "	Adding a contact to position " << _index << std::endl;
	std::cout << "First name:" << std::endl;
	std::cin >> _contact[_index].setFirstName();
	std::cin.clear();
	std::cout << "Last name:" << std::endl;
	std::cin >> _contact[_index].lastName;
	std::cout << "Nickname:" << std::endl;
	std::cin >> _contact[_index].nickName;
	std::cout << "Phone number:" << std::endl;
	std::cin >> _contact[_index].phoneNumber;
	std::cout << "Darkest Secret:" << std::endl;
	std::cin >> _contact[_index].darkestSecret;
	std::cout << "	Contact sucessfully added!" << std::endl;
	_index++;
	if (_index == 8)
		_index = 0;
}

num >> 8;

void	PhoneBook::search(void)
{
	int	num;

	std::cout << "	To show a contact enter the one you want from 0 to 7" << std::endl;
	std::cin >> num;
	if (std::cin.fail() || num > 7 || num < 0)
		std::cout << "Not the correct input, please insert number from 0 to 7" << std::endl;
	std::cout << "First name: " << _contact[num].firstName << std::endl;
	std::cout << "Last name: " << _contact[num].lastName << std::endl;
	std::cout << "Nickname: " << _contact[num].nickName << std::endl;
	std::cout << "Phone number: " << _contact[num].phoneNumber << std::endl;;
	std::cout << "Darkest secret: " << _contact[num].darkestSecret << std::endl;;
}
