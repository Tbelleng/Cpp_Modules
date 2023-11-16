#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:

		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		~PresidentialPardonForm();

		PresidentialPardonForm	&operator=(PresidentialPardonForm const &src);
		
		void		execute(Bureaucrat const &executor) const;
		
	private:
	
		std::string			_target;
		static const int	_gradeToSign = 25;
		static const int	_gradeToExec = 5;

};

#endif