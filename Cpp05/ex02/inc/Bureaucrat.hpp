#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public :
		
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat(void);
		
		Bureaucrat	&operator=(Bureaucrat const &src);

		std::string getName(void) const;
		int			getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);
		void		signForm(AForm &form);
		void		executeForm(AForm const &form);

		class GradeTooHighException : public std::exception 
		{
			virtual const char *what() const throw()
			{
				return "The grade is to high";
			}
		};
		class GradeTooLowException : public std::exception
		{
			const char *what() const throw()
			{
				return "The grade is to low";
			}
		};

	private :
	
		const std::string _name;
		int 		_grade;
	
};

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &src);

#endif