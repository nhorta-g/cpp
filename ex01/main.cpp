#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook PhoneBook;
	std::string input;
	bool exit = false;

	std::cout<<"Welcome to this crappy awesome \
		phonebook!"<<std::endl;
	while(!exit)
	{
		std::cout<<"Enter one option: add, search or exit, \
		please."<<std::endl;
		std::getline(std::cin, input);
		if(input == "add")
			PhoneBook.add();
		else if(input == "search")
			PhoneBook.search();
		else if(input == "exit")
			exit = true;
		else
			std::cout<<"Not a valid option. Please say: add, \
				search or exit"<<std::endl;
	}
}
