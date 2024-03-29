#include "inc/Form.hpp"
#include "inc/Bureaucrat.hpp"

int main(void)
{
		Bureaucrat	toto("toto", 11);
		Form		contract;
	
	std::cout << std::endl;
	try
	{
		toto.signForm(contract);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << toto << std::endl;
	
	try
	{
		toto.incrementGrade();
		std::cout << toto << std::endl;
		toto.signForm(contract);
		std::cout << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
}