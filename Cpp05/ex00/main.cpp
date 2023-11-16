#include "inc/Bureaucrat.hpp"

int main(void)
{
		Bureaucrat	a("nono", 1);
		Bureaucrat	b("jojo", 2);
		Bureaucrat	c("coco", 3);
		Bureaucrat	d("toto", 150);
	
	std::cout << std::endl;
	try
	{
		Bureaucrat toLow("mr.toHigh", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << d << std::endl;
	
	try
	{
		std::cout << "decrease nono" << std::endl;
		a.decrementGrade();
		std::cout << "increase jojo" << std::endl;
		b.incrementGrade();
		std::cout << "decrease toto" << std::endl;
		d.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << a;
	std::cout << b;
	std::cout << c;
	std::cout << d << std::endl;
}