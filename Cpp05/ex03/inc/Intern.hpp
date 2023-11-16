#ifndef INTERN_H
# define INTERN_H

#include "AForm.hpp"

class Intern
{
	public:
	
		Intern(void);
		Intern(Intern const &src);
		~Intern();

		Intern	&operator=(Intern const &src);

		AForm	*makeForm(std::string nameForm, std::string target);
		AForm	*robotomyForm(std::string target);
		AForm	*presidentialForm(std::string target);
		AForm	*shrubberyForm(std::string target);
		
		class NameEmptyException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "Creation form failed, the name does not exist";
			}
		};
};

#endif