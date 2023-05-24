#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>
# include <stdio.h>

class	PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void		add(void);
		void		search(void);
	private:
		int			_index;
		Contact		_contact[8];
		void		_show_contact(void);
		void	_print_contacts(std::string str);
};
#endif
