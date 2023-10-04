/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:37:34 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/22 02:33:05 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound(); 
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

    std::cout <<std::endl;
    
    std::cout << "--- WrongAnimal Test ---" << std::endl << std::endl;

    const WrongAnimal* metaa = new WrongAnimal();
    const WrongAnimal* ii = new WrongCat();

    std::cout << ii->getType() << " " << std::endl;
    ii->makeSound(); //will output the WrongAnimal sound!
    metaa->makeSound();
    delete metaa;
    delete ii;
    

    return 0;
}