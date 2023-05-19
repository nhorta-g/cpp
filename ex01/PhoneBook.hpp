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
	private:
		int		_index;
		Contact	_contact[8];
		void	add(void);
		void	search(void);
		void	input_data(std::string msg, std::string value);
};
#endif
