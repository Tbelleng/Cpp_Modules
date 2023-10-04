/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:37:34 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/22 02:27:35 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    //To test abstract class, remove the comment below 
    //const AAnimal* meta = new AAnimal();
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound();
    j->makeSound();
    //meta->makeSound();
    //delete meta;
    delete j;
    delete i;

    std::cout <<std::endl;
    
    std::cout << "--- Brain Test ---" << std::endl << std::endl;
    
    const AAnimal* jjj = new Dog();
    const AAnimal* iii = new Cat();
    
    delete jjj;
    delete iii;
    
    std::cout <<std::endl;
    
    std::cout << "--- Deep Copy Test ---" << std::endl << std::endl;
    
    const AAnimal* deep = new Dog();
    const AAnimal* deeper = (deep);
    
    delete deep;

    return 0;
}