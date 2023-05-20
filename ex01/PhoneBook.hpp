#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>

class	PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	add(void);
		void	search(void);
	private:
		int		_index;
		Contact	_contact[8];
		void	input_data(std::string msg, std::string value);
};
#endif
