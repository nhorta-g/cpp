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

	std::cout << "	Adding a contact to position " << (_index + 1) << std::endl;
	std::cout << "First name:";
	std::cin >> temp;
	_contact[_index].setFirstName(temp);
	std::cin.clear();
	std::cout << "Last name:";
	std::cin >> temp;
	_contact[_index].setLastName(temp);
	std::cin.clear();
	std::cout << "Nickname:";
	std::cin >> temp;
	_contact[_index].setNickName(temp);
	std::cin.clear();
	std::cout << "Phone number:";
	std::cin >> temp;
	_contact[_index].setPhoneNumber(temp);
	std::cin.clear();
	std::cout << "Darkest Secret:";
	std::cin >> temp;
	_contact[_index].setDarkestSecret(temp);
	std::cin.clear();
	std::cout << "	Contact sucessfully added!" << std::endl;
	_index++;
	if (_index == 8)
		_index = 0;
}

void	PhoneBook::_print_contacts(std::string str)
{
	if (str.size() < 11)
	{
		for (unsigned int i = 0; i < 10 - str.size(); i++)
			std::cout << " ";
		for (unsigned int i = 0; i < str.size(); i++)
			std::cout << str[i];
	}
	else
	{
		for (unsigned int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
}

void	PhoneBook::_show_contact(void)
{
	int	num;

	std::cout << std::endl << std::endl << std::endl;
	std::cout << "	To show a contact enter the one you want from 1 to 8" << std::endl;
	std::cin >> num;
	if (std::cin.fail() || num > 8 || num < 1)
		std::cout << "Not the correct input, please insert number from 1 to 8" << std::endl;
	num = num - 1;
	std::cout << "First name: " << _contact[num].getFirstName() << std::endl;
	std::cout << "Last name: " << _contact[num].getLastName() << std::endl;
	std::cout << "Nickname: " << _contact[num].getNickName() << std::endl;
	std::cout << "Phone number: " << _contact[num].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << _contact[num].getDarkestSecret() << std::endl << std::endl;
}

void	PhoneBook::search(void)
{
	int i = 0;

	std::cout << std::endl << std::endl << std::endl;
	std::cout << "          |          |          |          " << std::endl;
	std::cout << "   Index  |First Name| Last Name|  Nickname" << std::endl;
	std::cout << "__________|__________|__________|__________" << std::endl;
	while (!_contact[i].getFirstName().empty() && i < 8)
	{
		std::cout << "        " << i + 1 << " |";
		_print_contacts(_contact[i].getFirstName());
		std::cout << "|";
		_print_contacts(_contact[i].getLastName());
		std::cout << "|";
		_print_contacts(_contact[i].getNickName());
		std::cout << std::endl;
		i++;
	}
	_show_contact();
}
