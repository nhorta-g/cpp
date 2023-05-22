#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);
		std::string getFirstName(void);
		void	setFirstName(std::string newFirstName);
		std::string getLastName(void);
		void	setLastName(std::string newLastName);
		std::string getNickName(void);
		void	setNickName(std::string newnickName);
		std::string getPhoneNumber(void);
		void	setPhoneNumber(std::string newPhoneNumber);
		std::string getDarkestSecret(void);
		void	setDarkestSecret(std::string newDarkestSecret);
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
};
#endif
