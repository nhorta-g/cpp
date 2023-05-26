#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook PhoneBook;
	std::string input = "";
	bool exit = false;

	std::cout << std::endl << std::endl;
	std::cout << "Welcome to this crappy awesome phonebook!" << std::endl << std::endl;
	while(!exit)
	{
		std::cout << "Enter one option: add, search or exit, please." << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			return 1;
		if(input == "add")
			PhoneBook.add();
		else if(input == "search")
		{
			PhoneBook.search();
			std::cin.ignore(10000000,'\n');
		}
		else if(input == "exit")
			exit = true;
		else
			std::cout<<"Not a valid option. Please say: add, search or exit" << std::endl << std::endl;
		input = "";
		std::cin.clear();
	}
}
