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
	std::cout << "Last name:";
	std::cin >> temp;
	_contact[_index].setLastName(temp);
	std::cout << "Nickname:";
	std::cin >> temp;
	_contact[_index].setNickName(temp);
	std::cout << "Phone number:";
	std::cin >> temp;
	_contact[_index].setPhoneNumber(temp);
	std::cout << "Darkest Secret:";
	std::cin.ignore(10000000,'\n');
	std::getline(std::cin, temp);
	_contact[_index].setDarkestSecret(temp);
	std::cout << std::endl << "	Contact sucessfully added!" << std::endl << std::endl;
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

int		PhoneBook::_input_number()
{
	int num;

	std::cout << std::endl << std::endl;
	std::cout << "	To show a contact enter the one you want from 1 to 8" << std::endl;
	while (!(std::cin >> num) || num > 8 || num < 1)
	{
		if (std::cin.eof())
			exit(0);
		std::cout << "	Not the correct input, please insert number from 1 to 8" << std::endl;
		std::cin.clear();
		std::cin.ignore(10000000,'\n');
	}
	return num;
}

void	PhoneBook::_show_contact(void)
{
	int	num;

	num = _input_number() - 1;
	while (_contact[num].getFirstName().empty()) {
		std::cout << "There are no contacts in this position";
		num = _input_number() - 1;
	}
	std::cout << "First name: " << _contact[num].getFirstName() << std::endl;
	std::cout << "Last name: " << _contact[num].getLastName() << std::endl;
	std::cout << "Nickname: " << _contact[num].getNickName() << std::endl;
	std::cout << "Phone number: " << _contact[num].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << _contact[num].getDarkestSecret() << std::endl << std::endl;
}

void	PhoneBook::search(void)
{
	int i = 0;

	if (_contact[0].getFirstName().empty()) {
		std::cout << "There are no stored contacts" << std::endl;
		return ;
	}
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
