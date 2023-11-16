#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm();

		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &src);

		void		execute(Bureaucrat const &executor) const;

		class FileErrorException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "An error is present with the file";
			}
		};

	private:
	
		std::string			_target;
		static const int	_gradeToSign = 145;
		static const int	_gradeToExec = 137;

};

#endif