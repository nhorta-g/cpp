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
	std::string temp;

	std::cout << "	Adding a contact to position " << _index << std::endl;
	std::cout << "First name:" << std::endl;
	std::cin >> temp;
	_contact[_index].setFirstName(temp);
	std::cin.clear();
	std::cout << "Last name:" << std::endl;
	std::cin >> temp;
	_contact[_index].setLastName(temp);
	std::cin.clear();
	std::cout << "Nickname:" << std::endl;
	std::cin >> temp;
	_contact[_index].setNickName(temp);
	std::cin.clear();
	std::cout << "Phone number:" << std::endl;
	std::cin >> temp;
	_contact[_index].setPhoneNumber(temp);
	std::cin.clear();
	std::cout << "Darkest Secret:" << std::endl;
	std::cin >> temp;
	_contact[_index].setDarkestSecret(temp);
	std::cin.clear();
	std::cout << "	Contact sucessfully added!" << std::endl;
	_index++;
	if (_index == 8)
		_index = 0;
}

void	PhoneBook::search(void)
{
	int	num;

	std::cout << "          |          |          |         "
	std::cout << "   Index  |First Name| Last Name| Nickname"
	std::cout << "__________|__________|__________|_________"
	if

	std::cout << "	To show a contact enter the one you want from 0 to 7" << std::endl;
	std::cin >> num;
	if (std::cin.fail() || num > 7 || num < 0)
		std::cout << "Not the correct input, please insert number from 0 to 7" << std::endl;
	std::cout << "First name: " << _contact[num].getFirstName() << std::endl;
	std::cout << "Last name: " << _contact[num].getLastName() << std::endl;
	std::cout << "Nickname: " << _contact[num].getNickName() << std::endl;
	std::cout << "Phone number: " << _contact[num].getPhoneNumber() << std::endl;;
	std::cout << "Darkest secret: " << _contact[num].getDarkestSecret() << std::endl;;
}
