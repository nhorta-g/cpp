#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>

class	PhoneBook
{
	public:
		void	add(void);
		void	search(void);
		PhoneBook(void);
		~PhoneBook(void);
	private:
		Contact contact[8];
		int	index;
};
#endif
