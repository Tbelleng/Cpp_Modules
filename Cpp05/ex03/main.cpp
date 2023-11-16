#include "inc/AForm.hpp"
#include "inc/PresidentialPardonForm.hpp"
#include "inc/PresidentialPardonForm.hpp"
#include "inc/ShrubberyCreationForm.hpp"
#include "inc/RobotomyRequestForm.hpp"
#include "inc/Intern.hpp"

int main(void)
{
	Bureaucrat	jojo("jojo", 1);
	Intern		stagiaire;
	AForm* 		form;
	AForm* 		form1;
	AForm* 		form2;

	std::cout << "\n" << jojo << std::endl;
	
	try
	{
		form = stagiaire.makeForm("robotomy request", "Bender");
		std::cout << std::endl;
		form1 = stagiaire.makeForm("presidential pardon", "test");
		std::cout << std::endl;
		form2 = stagiaire.makeForm("shrubbery creation", "test");
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
		std::cout << std::endl;

	delete form;
	delete form1;
	delete form2;
}